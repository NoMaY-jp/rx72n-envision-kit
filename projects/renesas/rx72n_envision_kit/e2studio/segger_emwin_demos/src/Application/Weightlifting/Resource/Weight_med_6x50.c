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
* Source file: Weight_med_6x50                                       *
* Dimensions:  6 * 50                                                *
* NumColors:   None, only alpha channel                              *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmWeight_med_6x50;

static GUI_CONST_STORAGE unsigned char _acWeight_med_6x50[] = {
  /* RLE: 038 Pixels @ 000,000 */ 38, 0xFF, 
  /* ABS: 005 Pixels @ 002,006 */ 0, 5, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 001,007 */ 4, 0x00, 
  /* RLE: 001 Pixels @ 005,007 */ 1, 0xFF, 
  /* RLE: 204 Pixels @ 000,008 */ 204, 0x00, 
  /* RLE: 001 Pixels @ 000,042 */ 1, 0xFF, 
  /* RLE: 004 Pixels @ 001,042 */ 4, 0x00, 
  /* RLE: 003 Pixels @ 005,042 */ 3, 0xFF, 
  /* ABS: 002 Pixels @ 002,043 */ 0, 2, 0x00, 0x00, 
  /* RLE: 038 Pixels @ 004,043 */ 38, 0xFF, 
  0
};  // 27 bytes for 300 pixels

GUI_CONST_STORAGE GUI_BITMAP bmWeight_med_6x50 = {
  6, // xSize
  50, // ySize
  6, // BytesPerLine
  GUI_COMPRESS_RLE8, // BitsPerPixel
  (unsigned char *)_acWeight_med_6x50,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_RLEALPHA
};

/*************************** End of file ****************************/
