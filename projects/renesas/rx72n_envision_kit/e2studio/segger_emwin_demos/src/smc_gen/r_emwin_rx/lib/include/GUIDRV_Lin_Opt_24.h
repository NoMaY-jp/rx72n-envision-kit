/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2019  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.50 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only  be used  in accordance  with  a license  and should  not be  re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
Licensing information
Licensor:                 SEGGER Software GmbH
Licensed to:              Renesas Electronics Europe GmbH, Arcadiastrasse 10, 40472 Duesseldorf, Germany
Licensed SEGGER software: emWin
License number:           GUI-00678
License model:            License and Service Agreement, signed December 16th, 2016 and Amendment No. 1, signed May 16th, 2019
License valid for:        RX65N, RX651, RX72M, RX72N, RX661, RX66N
----------------------------------------------------------------------
Support and Update Agreement (SUA)
SUA period:               2016-12-22 - 2019-12-31
Contact to extend SUA:    sales@segger.com
----------------------------------------------------------------------
File        : GUIDRV_Lin_Opt_24.h
Purpose     : Optimized routines, included by GUIDRV_Lin_..._24.c
---------------------------END-OF-HEADER------------------------------
*/

/*********************************************************************
*
*       Static functions
*
**********************************************************************
*/
/*********************************************************************
*
*       _FillRectOpt24
*
* Purpose:
*   Optimized filling routine for 24 bpp
*/
static void _FillRectOpt24(GUI_DEVICE * pDevice, int x0, int y0, int x1, int y1) {
  DRIVER_CONTEXT * pContext;
  U32 Off, Off0, OffLine;
  int RemPixels, NumLines, RemLines, RemItems, Odd;
  U32 Data, Data0, Data1, Data2;
  LCD_PIXELINDEX ColorIndex;

  pContext  = (DRIVER_CONTEXT *)pDevice->u.pContext;
  Off0      = XY2OFF32(pContext->vxSizePhys, x0, y0);
  RemPixels = x1 - x0 + 1;
  Odd       = x0 & 3;
  NumLines  = y1 - y0 + 1;
  OffLine   = (pContext->vxSizePhys + pContext->vxSizePhys +pContext->vxSizePhys) >> 2;
  RemItems  = 0;
  Off       = 0;
#if (LCD_ENDIAN_BIG == 0)
  if (GUI_pContext->DrawMode & LCD_DRAWMODE_XOR) {
    //
    // First triple DWORD
    //
    if (Odd) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data     = READ_MEM32(pContext->VRAMAddr, Off);
        switch (Odd) {
        case 1:
          Data ^= 0xFF000000;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data ^= 0x0000FFFF;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 2:
          Data ^= 0xFFFF0000;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data ^= 0x000000FF;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 3:
          Data ^= 0xFFFFFF00;
          RemItems--;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
        }
      }
      Off0       = Off;
      RemPixels -= (RemPixels - RemItems);
    }
    //
    // Complete triple DWORDS
    //
    if (RemPixels >= 4) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        do {
          Data  = READ_MEM32(pContext->VRAMAddr, Off + 0);
          Data ^= 0xFFFFFFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off + 0, Data);
          Data  = READ_MEM32(pContext->VRAMAddr, Off + 1);
          Data ^= 0xFFFFFFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off + 1, Data);
          Data  = READ_MEM32(pContext->VRAMAddr, Off + 2);
          Data ^= 0xFFFFFFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off + 2, Data);
          Off += 3;
        } while ((RemItems -= 4) >= 4);
      }
      Off0       = Off;
      RemPixels -= (RemPixels >> 2) << 2;
    }
    //
    // Last triple DWORD
    //
    if (RemPixels) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data ^= 0x00FFFFFF;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data ^= 0xFF000000;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data ^= 0x0000FFFF;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data ^= 0xFFFF0000;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data ^= 0x000000FF;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
      }
    }
  } else {
    ColorIndex = LCD__GetColorIndex() & 0xFFFFFF;
    //
    // First triple DWORD
    //
    if (Odd) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        switch (Odd) {
        case 1:
          Data &= 0x00FFFFFF;
          Data |= ColorIndex << 24;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data &= 0xFFFF0000;
          Data |= ColorIndex >> 8;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 2:
          Data &= 0x0000FFFF;
          Data |= ColorIndex << 16;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data &= 0xFFFFFF00;
          Data |= ColorIndex >> 16;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 3:
          Data &= 0x000000FF;
          Data |= ColorIndex << 8;
          RemItems--;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
        }
      }
      Off0       = Off;
      RemPixels -= (RemPixels - RemItems);
    }
    //
    // Complete triple DWORDS
    //
    if (RemPixels >= 4) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data0 = (ColorIndex      ) | (ColorIndex << 24);
        Data1 = (ColorIndex >>  8) | (ColorIndex << 16);
        Data2 = (ColorIndex >> 16) | (ColorIndex <<  8);
        do {
          WRITE_MEM32(pContext->VRAMAddr, Off + 0, Data0);
          WRITE_MEM32(pContext->VRAMAddr, Off + 1, Data1);
          WRITE_MEM32(pContext->VRAMAddr, Off + 2, Data2);
          Off += 3;
        } while ((RemItems -= 4) >= 4);
      }
      Off0       = Off;
      RemPixels -= (RemPixels >> 2) << 2;
    }
    //
    // Last triple DWORD
    //
    if (RemPixels) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data &= 0xFF000000;
        Data |= ColorIndex;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data &= 0x00FFFFFF;
        Data |= ColorIndex << 24;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data &= 0xFFFF0000;
        Data |= ColorIndex >> 8;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data &= 0x0000FFFF;
        Data |= ColorIndex << 16;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data &= 0xFFFFFF00;
        Data |= ColorIndex >> 16;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
      }
    }
  }
#else
  if (GUI_pContext->DrawMode & LCD_DRAWMODE_XOR) {
    //
    // First triple DWORD
    //
    if (Odd) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data     = READ_MEM32(pContext->VRAMAddr, Off);
        switch (Odd) {
        case 1:
          Data ^= 0x000000FF;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data ^= 0xFFFF0000;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 2:
          Data ^= 0x0000FFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data ^= 0xFF000000;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 3:
          Data ^= 0x00FFFFFF;
          RemItems--;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
        }
      }
      Off0       = Off;
      RemPixels -= (RemPixels - RemItems);
    }
    //
    // Complete triple DWORDS
    //
    if (RemPixels >= 4) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        do {
          Data  = READ_MEM32(pContext->VRAMAddr, Off + 0);
          Data ^= 0xFFFFFFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off + 0, Data);
          Data  = READ_MEM32(pContext->VRAMAddr, Off + 1);
          Data ^= 0xFFFFFFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off + 1, Data);
          Data  = READ_MEM32(pContext->VRAMAddr, Off + 2);
          Data ^= 0xFFFFFFFF;
          WRITE_MEM32(pContext->VRAMAddr, Off + 2, Data);
          Off += 3;
        } while ((RemItems -= 4) >= 4);
      }
      Off0       = Off;
      RemPixels -= (RemPixels >> 2) << 2;
    }
    //
    // Last triple DWORD
    //
    if (RemPixels) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data ^= 0xFFFFFF00;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data ^= 0x000000FF;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data ^= 0xFFFF0000;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data ^= 0x0000FFFF;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data ^= 0xFF000000;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
      }
    }
  } else {
    ColorIndex = LCD__GetColorIndex();
    //
    // First triple DWORD
    //
    if (Odd) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        switch (Odd) {
        case 1:
          Data &= 0xFFFFFF00;
          Data |= ColorIndex >> 16;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data &= 0x0000FFFF;
          Data |= ColorIndex << 16;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 2:
          Data &= 0xFFFF0000;
          Data |= ColorIndex >> 8;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
          Data  = READ_MEM32(pContext->VRAMAddr, Off);
          Data &= 0x00FFFFFF;
          Data |= ColorIndex << 24;
          RemItems--;
          if (!RemItems) {
            WRITE_MEM32(pContext->VRAMAddr, Off, Data);
            break;
          }
          //
          // no break at this position required...
          //
          //lint -fallthrough // No break here.
          // Avoid GCC warning '-Wimplicit-fallthrough':
          // fall through
        case 3:
          Data &= 0xFF000000;
          Data |= ColorIndex;
          RemItems--;
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          Off++;
        }
      }
      Off0       = Off;
      RemPixels -= (RemPixels - RemItems);
    }
    //
    // Complete triple DWORDS
    //
    if (RemPixels >= 4) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);
        Data0 = (ColorIndex <<  8) | (ColorIndex >> 16);
        Data1 = (ColorIndex << 16) | (ColorIndex >>  8);
        Data2 = (ColorIndex << 24) | (ColorIndex      );
        do {
          WRITE_MEM32(pContext->VRAMAddr, Off + 0, Data0);
          WRITE_MEM32(pContext->VRAMAddr, Off + 1, Data1);
          WRITE_MEM32(pContext->VRAMAddr, Off + 2, Data2);
          Off += 3;
        } while ((RemItems -= 4) >= 4);
      }
      Off0       = Off;
      RemPixels -= (RemPixels >> 2) << 2;
    }
    //
    // Last triple DWORD
    //
    if (RemPixels) {
      for (RemLines = NumLines; RemLines; RemLines--) {
        RemItems = RemPixels;
        Off      = Off0 + OffLine * (RemLines - 1);

        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data &= 0x000000FF;
        Data |= (ColorIndex << 8);
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data &= 0xFFFFFF00;
        Data |= ColorIndex >> 16;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data &= 0x0000FFFF;
        Data |= ColorIndex << 16;
        RemItems--;
        if (!RemItems) {
          WRITE_MEM32(pContext->VRAMAddr, Off, Data);
          continue;
        }
        Data &= 0xFFFF0000;
        Data |= ColorIndex >> 8;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
        Off++;
        Data  = READ_MEM32(pContext->VRAMAddr, Off);
        Data &= 0x00FFFFFF;
        Data |= ColorIndex << 24;
        WRITE_MEM32(pContext->VRAMAddr, Off, Data);
      }
    }
  }
#endif
}

/*************************** End of file ****************************/
