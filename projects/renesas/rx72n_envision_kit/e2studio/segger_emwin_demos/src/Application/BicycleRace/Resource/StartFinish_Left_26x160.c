/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.48d.                          *
*        Compiled Sep 13 2018, 15:45:25                              *
*                                                                    *
*        (c) 1998 - 2018 Segger Microcontroller GmbH                 *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: StartFinish_Left_26x160                               *
* Dimensions:  26 * 160                                              *
* NumColors:   3                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmStartFinish_Left_26x160;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _ColorsStartFinish_Left_26x160[] = {
#if (GUI_USE_ARGB == 0)
  0x00FFFFFF, 0x00CE7600, 0x00AB2D00
#else
  0xFFFFFFFF, 0xFF0076CE, 0xFF002DAB
#endif

};

static GUI_CONST_STORAGE GUI_LOGPALETTE _PalStartFinish_Left_26x160 = {
  3,  // Number of entries
  1,  // Has transparency
  &_ColorsStartFinish_Left_26x160[0]
};

static GUI_CONST_STORAGE unsigned char _acStartFinish_Left_26x160[] = {
  0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x60,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x80,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x56, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x58, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x60, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00,
  0x95, 0x55, 0x55, 0x55, 0x55, 0x80, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmStartFinish_Left_26x160 = {
  26, // xSize
  160, // ySize
  7, // BytesPerLine
  2, // BitsPerPixel
  _acStartFinish_Left_26x160,  // Pointer to picture data (indices)
  &_PalStartFinish_Left_26x160   // Pointer to palette
};

/*************************** End of file ****************************/
