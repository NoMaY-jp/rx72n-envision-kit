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
* Source file: Quiver_37x110                                         *
* Dimensions:  37 * 110                                              *
* NumColors:   237                                                   *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmQuiver_37x110;

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
static GUI_CONST_STORAGE GUI_COLOR _ColorsQuiver_37x110[] = {
#if (GUI_USE_ARGB == 0)
  0x00FFFFFF, 0x00614342, 0x00779FCA, 0x006D7DB4,
  0x006D84CC, 0x0078A0CB, 0x00769EC9, 0x006C83CB,
  0x00686CB3, 0x0079A1CC, 0x0076A4D1, 0x0078A8CF,
  0x006A81C8, 0x007289D1, 0x007AABD1, 0x006E85CD,
  0x006E7EB5, 0x006272A8, 0x007CA5D0, 0x00718DB3,
  0x00738AD3, 0x00657AB2, 0x006167A7, 0x00759DC8,
  0x00676BB2, 0x006A7BC0, 0x0078A7D3, 0x006B7BB2,
  0x007AA9D6, 0x005E6B98, 0x007CADD3, 0x006E86B9,
  0x006F86CE, 0x005D6A97, 0x007191C0, 0x007393C2,
  0x006777AE, 0x006E88B4, 0x006671A5, 0x007BACD2,
  0x007DAED4, 0x005F6E95, 0x00606F96, 0x0079B0D8,
  0x005A6794, 0x005C6B91, 0x006673A0, 0x006F7FB6,
  0x006D8BC0, 0x007182C8, 0x007399CA, 0x005C6996,
  0x007EAFD5, 0x006781AD, 0x006F8DC2, 0x007081C7,
  0x007087CF, 0x00667AA4, 0x006676AC, 0x006C7CB3,
  0x007494C3, 0x0075A3D0, 0x007FB6DF, 0x005D6C92,
  0x006274A4, 0x006878AF, 0x007193BB, 0x00729AC5,
  0x007091CF, 0x006F8ED2, 0x0080B1D8, 0x005F6691,
  0x005E6394, 0x006E8CC1, 0x00748DCF, 0x007190D4,
  0x0077A7CD, 0x007EA7D2, 0x005E6590, 0x006579A3,
  0x006B7FBE, 0x006680AC, 0x006D83BC, 0x007088BB,
  0x006F88CA, 0x00708EC3, 0x00708FD3, 0x007698D6,
  0x0078AFD7, 0x007AB1D9, 0x007CB3DB, 0x00586490,
  0x005F6299, 0x005F6C99, 0x00617097, 0x005E6EA3,
  0x006467AE, 0x006679A8, 0x006768B6, 0x006770B9,
  0x00677AB9, 0x006C7DC3, 0x006C8EB6, 0x00738BBE,
  0x007294BC, 0x006F97C1, 0x007192D0, 0x007CB1CA,
  0x007BAAD7, 0x007CABD8, 0x007BB4D5, 0x007BB2DA,
  0x007FB8DA, 0x007DBCE0, 0x00676671, 0x005C638E,
  0x005D6293, 0x005B6895, 0x005D679A, 0x0060639A,
  0x00627198, 0x0063709D, 0x00626CA0, 0x006072A2,
  0x006774A1, 0x006476A6, 0x00677BA5, 0x006373A9,
  0x006575AB, 0x006370AC, 0x00647EA9, 0x00687AAA,
  0x00656EB7, 0x006775B1, 0x006977B4, 0x006972BC,
  0x006879BF, 0x006D79BC, 0x006581A6, 0x006783A8,
  0x006B87AD, 0x007793A4, 0x006B81BA, 0x006F87BA,
  0x006C8CBA, 0x006C8ABF, 0x007189BC, 0x00779FB4,
  0x007092BA, 0x007AA0BC, 0x006E81C1, 0x006F80C6,
  0x007084C4, 0x00748CC0, 0x00718FC4, 0x00718ACC,
  0x00738CCE, 0x006E96C0, 0x007797C6, 0x00729CC0,
  0x00739DC1, 0x00749EC2, 0x00759BCC, 0x007188D0,
  0x007394D2, 0x007292D6, 0x007493D7, 0x00739BDB,
  0x007CA7CB, 0x007DA8CC, 0x0076ADD4, 0x0077AED6,
  0x007AB3D4, 0x00614945, 0x00614E4D, 0x00635A59,
  0x00696160, 0x006C717F, 0x0059688E, 0x005D6097,
  0x005E699C, 0x005F739C, 0x00616A8F, 0x00626F9C,
  0x0065729F, 0x00717A90, 0x006069A2, 0x00686EAF,
  0x00687CA6, 0x00647CAE, 0x00697BAB, 0x00646FB2,
  0x006B6FB7, 0x006772B5, 0x00667EB0, 0x006979B0,
  0x006871BA, 0x006D7EC4, 0x007396A8, 0x007598AA,
  0x006981B3, 0x006F8BB1, 0x006F89B6, 0x006883BD,
  0x006F85BE, 0x006A85C0, 0x006B84C5, 0x006D88C3,
  0x007292C1, 0x007596C5, 0x007199C3, 0x00749CC7,
  0x007591CD, 0x00779DCF, 0x00799AC9, 0x007293D1,
  0x00769AD2, 0x007796DB, 0x00759ED8, 0x007A9CDA,
  0x0076A0C4, 0x0073A3C9, 0x007EB4C7, 0x0078A2DB,
  0x0070AADA, 0x0076B3DD, 0x007DB6D8, 0x0048B0FE,
  0x0059B8F7, 0x0054BAFA, 0x0056BCFD, 0x0063B7ED,
  0x0075B8E4, 0x006BC1F2, 0x006DC3F4, 0x0082B3DA,
  0x0080BFE3
#else
  0xFFFFFFFF, 0xFF424361, 0xFFCA9F77, 0xFFB47D6D,
  0xFFCC846D, 0xFFCBA078, 0xFFC99E76, 0xFFCB836C,
  0xFFB36C68, 0xFFCCA179, 0xFFD1A476, 0xFFCFA878,
  0xFFC8816A, 0xFFD18972, 0xFFD1AB7A, 0xFFCD856E,
  0xFFB57E6E, 0xFFA87262, 0xFFD0A57C, 0xFFB38D71,
  0xFFD38A73, 0xFFB27A65, 0xFFA76761, 0xFFC89D75,
  0xFFB26B67, 0xFFC07B6A, 0xFFD3A778, 0xFFB27B6B,
  0xFFD6A97A, 0xFF986B5E, 0xFFD3AD7C, 0xFFB9866E,
  0xFFCE866F, 0xFF976A5D, 0xFFC09171, 0xFFC29373,
  0xFFAE7767, 0xFFB4886E, 0xFFA57166, 0xFFD2AC7B,
  0xFFD4AE7D, 0xFF956E5F, 0xFF966F60, 0xFFD8B079,
  0xFF94675A, 0xFF916B5C, 0xFFA07366, 0xFFB67F6F,
  0xFFC08B6D, 0xFFC88271, 0xFFCA9973, 0xFF96695C,
  0xFFD5AF7E, 0xFFAD8167, 0xFFC28D6F, 0xFFC78170,
  0xFFCF8770, 0xFFA47A66, 0xFFAC7666, 0xFFB37C6C,
  0xFFC39474, 0xFFD0A375, 0xFFDFB67F, 0xFF926C5D,
  0xFFA47462, 0xFFAF7868, 0xFFBB9371, 0xFFC59A72,
  0xFFCF9170, 0xFFD28E6F, 0xFFD8B180, 0xFF91665F,
  0xFF94635E, 0xFFC18C6E, 0xFFCF8D74, 0xFFD49071,
  0xFFCDA777, 0xFFD2A77E, 0xFF90655E, 0xFFA37965,
  0xFFBE7F6B, 0xFFAC8066, 0xFFBC836D, 0xFFBB8870,
  0xFFCA886F, 0xFFC38E70, 0xFFD38F70, 0xFFD69876,
  0xFFD7AF78, 0xFFD9B17A, 0xFFDBB37C, 0xFF906458,
  0xFF99625F, 0xFF996C5F, 0xFF977061, 0xFFA36E5E,
  0xFFAE6764, 0xFFA87966, 0xFFB66867, 0xFFB97067,
  0xFFB97A67, 0xFFC37D6C, 0xFFB68E6C, 0xFFBE8B73,
  0xFFBC9472, 0xFFC1976F, 0xFFD09271, 0xFFCAB17C,
  0xFFD7AA7B, 0xFFD8AB7C, 0xFFD5B47B, 0xFFDAB27B,
  0xFFDAB87F, 0xFFE0BC7D, 0xFF716667, 0xFF8E635C,
  0xFF93625D, 0xFF95685B, 0xFF9A675D, 0xFF9A6360,
  0xFF987162, 0xFF9D7063, 0xFFA06C62, 0xFFA27260,
  0xFFA17467, 0xFFA67664, 0xFFA57B67, 0xFFA97363,
  0xFFAB7565, 0xFFAC7063, 0xFFA97E64, 0xFFAA7A68,
  0xFFB76E65, 0xFFB17567, 0xFFB47769, 0xFFBC7269,
  0xFFBF7968, 0xFFBC796D, 0xFFA68165, 0xFFA88367,
  0xFFAD876B, 0xFFA49377, 0xFFBA816B, 0xFFBA876F,
  0xFFBA8C6C, 0xFFBF8A6C, 0xFFBC8971, 0xFFB49F77,
  0xFFBA9270, 0xFFBCA07A, 0xFFC1816E, 0xFFC6806F,
  0xFFC48470, 0xFFC08C74, 0xFFC48F71, 0xFFCC8A71,
  0xFFCE8C73, 0xFFC0966E, 0xFFC69777, 0xFFC09C72,
  0xFFC19D73, 0xFFC29E74, 0xFFCC9B75, 0xFFD08871,
  0xFFD29473, 0xFFD69272, 0xFFD79374, 0xFFDB9B73,
  0xFFCBA77C, 0xFFCCA87D, 0xFFD4AD76, 0xFFD6AE77,
  0xFFD4B37A, 0xFF454961, 0xFF4D4E61, 0xFF595A63,
  0xFF606169, 0xFF7F716C, 0xFF8E6859, 0xFF97605D,
  0xFF9C695E, 0xFF9C735F, 0xFF8F6A61, 0xFF9C6F62,
  0xFF9F7265, 0xFF907A71, 0xFFA26960, 0xFFAF6E68,
  0xFFA67C68, 0xFFAE7C64, 0xFFAB7B69, 0xFFB26F64,
  0xFFB76F6B, 0xFFB57267, 0xFFB07E66, 0xFFB07969,
  0xFFBA7168, 0xFFC47E6D, 0xFFA89673, 0xFFAA9875,
  0xFFB38169, 0xFFB18B6F, 0xFFB6896F, 0xFFBD8368,
  0xFFBE856F, 0xFFC0856A, 0xFFC5846B, 0xFFC3886D,
  0xFFC19272, 0xFFC59675, 0xFFC39971, 0xFFC79C74,
  0xFFCD9175, 0xFFCF9D77, 0xFFC99A79, 0xFFD19372,
  0xFFD29A76, 0xFFDB9677, 0xFFD89E75, 0xFFDA9C7A,
  0xFFC4A076, 0xFFC9A373, 0xFFC7B47E, 0xFFDBA278,
  0xFFDAAA70, 0xFFDDB376, 0xFFD8B67D, 0xFFFEB048,
  0xFFF7B859, 0xFFFABA54, 0xFFFDBC56, 0xFFEDB763,
  0xFFE4B875, 0xFFF2C16B, 0xFFF4C36D, 0xFFDAB382,
  0xFFE3BF80
#endif

};

static GUI_CONST_STORAGE GUI_LOGPALETTE _PalQuiver_37x110 = {
  237,  // Number of entries
  1,    // Has transparency
  &_ColorsQuiver_37x110[0]
};

static GUI_CONST_STORAGE unsigned char _acQuiver_37x110[] = {
  0x00, 0xB2, 0x2D, 0x2D, 0x2D, 0x2D, 0x3F, 0x29, 0x3F, 0x3F, 0x2D, 0x3F, 0x1D, 0x1D, 0x29, 0x2D, 0x2D, 0x3F, 0x21, 0x29, 0x2D, 0x2D, 0x29, 0xB6, 0x29, 0x29, 0x2D, 0x3F, 0x21, 0x29, 0x75, 0x47, 0x4E, 0x4E, 0x4E, 0x73, 0x00,
  0x5E, 0xA8, 0x46, 0x34, 0x1E, 0x1C, 0x0A, 0x1A, 0x0A, 0x1A, 0x0A, 0x1C, 0x3D, 0x0B, 0x0A, 0x1A, 0x0A, 0x1C, 0x09, 0x27, 0x0A, 0x1A, 0x0A, 0x1A, 0x0A, 0x0E, 0x0A, 0x1A, 0x0A, 0x1A, 0x9E, 0x8E, 0x52, 0x52, 0x52, 0x03, 0x5D,
  0x8C, 0x46, 0xE2, 0x46, 0x46, 0x0E, 0x1E, 0x0A, 0x1E, 0x27, 0x1A, 0x59, 0x0A, 0x28, 0x0B, 0x27, 0x1A, 0x59, 0x09, 0x6F, 0x3D, 0xAA, 0x0B, 0x27, 0x0B, 0x58, 0x1A, 0xAA, 0x0E, 0x1A, 0x3D, 0x91, 0x22, 0x36, 0x22, 0x67, 0x39,
  0x29, 0x1E, 0xA9, 0x4D, 0x12, 0x02, 0x17, 0x02, 0x06, 0x02, 0x02, 0x06, 0x06, 0x06, 0x06, 0x02, 0x02, 0x06, 0x06, 0x06, 0x02, 0x02, 0x02, 0x02, 0x06, 0x06, 0x02, 0x02, 0x02, 0x05, 0x49, 0x3B, 0x1B, 0x3B, 0x1B, 0x10, 0x5B,
  0x2A, 0x1E, 0x0B, 0x0B, 0x4D, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x09, 0x55, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x12, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x02, 0x09, 0x06, 0x05, 0x02, 0x02, 0x02, 0x09, 0x36, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x4D, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x17, 0x09, 0x06, 0x05, 0x06, 0x05, 0x17, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x02, 0x9A, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x12, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x05, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x36, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x4C, 0x02, 0x05, 0x06, 0x05, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x02, 0x05, 0x05, 0x55, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x12, 0x05, 0x06, 0x05, 0x02, 0x05, 0x02, 0x05, 0x06, 0x05, 0x02, 0x05, 0x02, 0x05, 0x06, 0x05, 0x02, 0x05, 0x02, 0x05, 0x06, 0x05, 0x02, 0x05, 0x02, 0x09, 0x22, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x4D, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x09, 0x55, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x12, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x02, 0x05, 0x06, 0x05, 0x02, 0x02, 0x02, 0x09, 0x36, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x4D, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x17, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x02, 0x9A, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x12, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x36, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x2A, 0x1E, 0x0B, 0x0B, 0x4C, 0x06, 0x09, 0x06, 0x05, 0x02, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x05, 0x06, 0x09, 0x06, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x05, 0x55, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x2C,
  0x29, 0x1E, 0xA9, 0x0B, 0xA8, 0x02, 0x17, 0x02, 0x06, 0x02, 0x02, 0x06, 0x06, 0x02, 0x06, 0x02, 0x02, 0x06, 0x06, 0x02, 0x06, 0x02, 0x02, 0x02, 0x06, 0x02, 0x06, 0x02, 0x02, 0x05, 0x36, 0x3B, 0x3B, 0x3B, 0x3B, 0x10, 0x5B,
  0x8B, 0x34, 0x6E, 0x46, 0x34, 0x0B, 0x0E, 0x0A, 0x0E, 0x0B, 0x0A, 0xAB, 0x0A, 0x0E, 0x0A, 0x0B, 0x0A, 0xAB, 0x09, 0x2B, 0x3D, 0x27, 0x0B, 0x0E, 0x1A, 0x1E, 0x0A, 0x27, 0x0B, 0x0A, 0x05, 0x53, 0x49, 0x30, 0x36, 0x92, 0x4F,
  0xB5, 0x0B, 0xEB, 0x46, 0x34, 0x0E, 0x1C, 0x1C, 0x1C, 0x1C, 0x0A, 0x28, 0x0A, 0x6C, 0x1A, 0x1C, 0x0A, 0x28, 0x3D, 0x28, 0x0A, 0x0E, 0x1A, 0x0E, 0x0A, 0x6C, 0x0A, 0x1C, 0x1C, 0x1C, 0x32, 0x52, 0x8F, 0xCC, 0x53, 0xC8, 0x78,
  0x00, 0x2D, 0x2A, 0x2A, 0x29, 0x29, 0x29, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x29, 0x33, 0x47, 0x47, 0x47, 0x47, 0x5B, 0x00,
  0x00, 0x00, 0x7C, 0x10, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x61, 0x92, 0x53, 0x53, 0x8F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x8E, 0x03, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x66, 0x28, 0x27, 0x27, 0x4C, 0x05, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0xD0, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x17, 0x05, 0x02, 0x02, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x02, 0x05, 0x02, 0x05, 0x06, 0x05, 0x02, 0x05, 0x02, 0x05, 0x06, 0x05, 0x02, 0x05, 0x02, 0x05, 0x06, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x02, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x05, 0x06, 0x09, 0x06, 0x05, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x09, 0x06, 0x05, 0x06, 0x09, 0x17, 0x09, 0x06, 0x05, 0x06, 0x05, 0x17, 0x09, 0x06, 0x05, 0x06, 0x05, 0x17, 0x09, 0x06, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x17, 0x05, 0x02, 0x02, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x3C, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x06, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x02, 0x02, 0x06, 0x05, 0x06, 0x09, 0x06, 0x02, 0x06, 0x05, 0x06, 0x09, 0x06, 0x05, 0x06, 0x05, 0x06, 0x09, 0x06, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x17, 0x05, 0x02, 0x02, 0x06, 0x09, 0x17, 0x09, 0x02, 0x02, 0x06, 0x09, 0x17, 0x09, 0x02, 0x05, 0x06, 0x09, 0x17, 0x09, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x3C, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x02, 0x02, 0x05, 0x02, 0x06, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x09, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x02, 0x02, 0x05, 0x05, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x02, 0x02, 0x06, 0x02, 0x02, 0x05, 0x02, 0x02, 0x02, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x06, 0x02, 0x02, 0x05, 0x06, 0x05, 0x02, 0x02, 0x02, 0x05, 0x06, 0x05, 0x06, 0x02, 0x02, 0x05, 0x06, 0x05, 0x02, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x06, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x09, 0x02, 0x02, 0x06, 0x09, 0x06, 0x09, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x05, 0x02, 0x02, 0x06, 0x09, 0x06, 0x3C, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x05, 0x02, 0x02, 0x02, 0x06, 0x05, 0x02, 0x05, 0x05, 0x02, 0x06, 0x05, 0x02, 0x05, 0x02, 0x02, 0x06, 0x09, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x02, 0x02, 0x05, 0xD5, 0x02, 0x02, 0x02, 0x02, 0x05, 0x02, 0x02, 0x02, 0x06, 0x02, 0x05, 0x02, 0x02, 0x02, 0x02, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x3D, 0x06, 0x02, 0x02, 0x02, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x02, 0x05, 0x22, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x06, 0x02, 0x02, 0x05, 0x09, 0x09, 0x05, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x23, 0x1B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x05, 0x02, 0x09, 0x9E, 0x49, 0x99, 0x30, 0x30, 0x30, 0x30, 0x30, 0x67, 0x30, 0x49, 0x30, 0x30, 0x30, 0x67, 0x30, 0x1F, 0x3B, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x02, 0x02, 0x90, 0x40, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x7F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x06, 0x02, 0x82, 0x82, 0xC9, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x8B, 0x5D, 0x03, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x9D, 0x51, 0x28, 0x27, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0B, 0x6F, 0x4F, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x02, 0x3C, 0x35, 0x27, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x1A, 0x2B, 0x39, 0x3A, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x23, 0x35, 0x0B, 0x1A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0E, 0x7E, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x02, 0x9D, 0x51, 0x0B, 0x1C, 0x0A, 0x0A, 0x0A, 0x12, 0x2B, 0x6C, 0x0A, 0x6D, 0x2B, 0x12, 0x0A, 0x0A, 0x0A, 0x0A, 0x1E, 0x39, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x09, 0x23, 0x35, 0x28, 0x0B, 0x0A, 0x0A, 0x12, 0x5A, 0x93, 0xDE, 0x6D, 0x6B, 0x93, 0x5A, 0x12, 0x0A, 0x0A, 0x1A, 0x6E, 0x39, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x02, 0x3C, 0x35, 0x0E, 0x1C, 0x0A, 0x0A, 0x12, 0x3E, 0x8D, 0xAE, 0xB1, 0xAD, 0xC6, 0x3E, 0x12, 0x0A, 0x0A, 0x0A, 0x28, 0x39, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x23, 0x35, 0x0B, 0x1A, 0x0A, 0x0A, 0x0A, 0x0A, 0x71, 0x72, 0x01, 0x72, 0xEC, 0x12, 0x0A, 0x0A, 0x0A, 0x0A, 0x27, 0x39, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x69, 0xBC, 0x0B, 0x1C, 0x0A, 0x0A, 0x12, 0x3E, 0x8D, 0xB0, 0xB9, 0xAF, 0xC7, 0x3E, 0x12, 0x0A, 0x0A, 0x0A, 0x1E, 0x7B, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x02, 0x3C, 0x5E, 0x69, 0x59, 0x0A, 0x12, 0x12, 0x58, 0x95, 0x6B, 0x6D, 0x6B, 0x95, 0x34, 0x12, 0x12, 0x12, 0x2B, 0xA0, 0x4E, 0x41, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x02, 0x69, 0x79, 0x78, 0x06, 0x70, 0x3E, 0x2B, 0x2B, 0x71, 0x3E, 0x2B, 0x3E, 0x71, 0x59, 0x2B, 0x5A, 0x70, 0xDC, 0x5E, 0x5D, 0x41, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x05, 0x23, 0x51, 0x25, 0x79, 0x8A, 0x94, 0x42, 0x42, 0x68, 0x68, 0x42, 0x42, 0x68, 0x42, 0x42, 0x94, 0x8A, 0xB7, 0xCA, 0x61, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x12, 0x02, 0x3C, 0x35, 0x4C, 0x36, 0x3A, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x3A, 0x99, 0x0E, 0x7E, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x13, 0x0E, 0x0B, 0x0B, 0x09, 0x02, 0x23, 0x35, 0x0E, 0x0B, 0x3D, 0xA2, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0xA2, 0x12, 0x1A, 0xAC, 0x39, 0x24, 0x03, 0x03, 0x03, 0x03, 0x10, 0x11, 0x00, 0x00,
  0x00, 0x00, 0x8C, 0x02, 0x17, 0x17, 0xD2, 0xD1, 0x90, 0x51, 0x28, 0x0B, 0x0A, 0x1A, 0x1A, 0x1A, 0x0A, 0x0B, 0x0A, 0x09, 0x12, 0x1A, 0x1A, 0x1A, 0x0A, 0x1A, 0x58, 0x4F, 0x7F, 0x41, 0x41, 0x41, 0x41, 0xC3, 0xB8, 0x00, 0x00,
  0x00, 0x00, 0x21, 0x5F, 0x5F, 0x5F, 0x7A, 0x7A, 0xB4, 0x4F, 0x0B, 0x1A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0B, 0xE8, 0xE7, 0xE0, 0xD6, 0x1A, 0x0A, 0x0A, 0x0A, 0x0A, 0x27, 0x40, 0xB3, 0x5C, 0x77, 0x5C, 0x77, 0x5C, 0x74, 0x00, 0x00,
  0x00, 0x00, 0x49, 0xA7, 0xA5, 0xDF, 0x14, 0xDB, 0xCE, 0x35, 0x0B, 0x1A, 0x0A, 0x0A, 0x0A, 0x12, 0x70, 0xE4, 0xE3, 0xE5, 0x12, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x58, 0x83, 0xC1, 0x98, 0x87, 0x54, 0x63, 0x98, 0x85, 0x00, 0x00,
  0x00, 0x00, 0xCB, 0xA6, 0x45, 0x57, 0x54, 0x6A, 0x50, 0xC2, 0x1E, 0x0B, 0x0A, 0x0A, 0x0A, 0x12, 0x28, 0xE9, 0xE6, 0xEA, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x1A, 0xAC, 0x61, 0xBB, 0x89, 0x84, 0x19, 0x84, 0x88, 0x81, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x07, 0x50, 0xBE, 0x27, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x1E, 0xE1, 0x1E, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x27, 0x7D, 0x60, 0x08, 0x08, 0x62, 0x08, 0x08, 0xBA, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x50, 0xBD, 0x0B, 0x1A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x1A, 0x6E, 0x7D, 0x60, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0xC5, 0x83, 0x0B, 0x1C, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0E, 0x7B, 0x60, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x07, 0x0C, 0x11, 0xA1, 0x28, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x1E, 0xDD, 0x76, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x0F, 0x64, 0x40, 0x4C, 0x6F, 0x2B, 0x28, 0x34, 0x2B, 0x34, 0x28, 0x34, 0x2B, 0x34, 0x28, 0x2B, 0x5A, 0x0B, 0x40, 0xBF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x07, 0x04, 0x64, 0x40, 0x66, 0x9F, 0x43, 0x43, 0xD3, 0x43, 0x43, 0xA0, 0xA1, 0x43, 0x43, 0x9F, 0x66, 0x40, 0x86, 0x65, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x07, 0x04, 0x04, 0x07, 0x50, 0x86, 0x24, 0x24, 0x3A, 0x80, 0x24, 0x80, 0x24, 0x3A, 0x3A, 0x3A, 0x24, 0x64, 0x65, 0x0F, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x04, 0x07, 0x04, 0x07, 0x04, 0x0C, 0x0C, 0x0C, 0x31, 0x37, 0x07, 0x0C, 0x0C, 0x0C, 0x31, 0x0C, 0x04, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x04, 0x0C, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x07, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x07, 0x04, 0x07, 0x04, 0x04, 0x04, 0x07, 0x04, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x04, 0x04, 0x07, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04, 0x04, 0x04, 0x07, 0x07, 0x04, 0x04, 0x04, 0x04, 0x07, 0x07, 0x04, 0x04, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x04, 0x07, 0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x04, 0x0C, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x07, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x07, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x07, 0x04, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x04, 0x07, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04, 0x04, 0x04, 0x07, 0x07, 0x04, 0x04, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x04, 0x07, 0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x07, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x04, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x0C, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x0C, 0x07, 0x07, 0x0C, 0x0F, 0x07, 0x07, 0x0C, 0x07, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x0C, 0x0C, 0x0C, 0x04, 0x07, 0x07, 0x0C, 0x0C, 0x31, 0x0F, 0x0C, 0x0F, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x07, 0x04, 0x07, 0x04, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x04, 0x07, 0x0C, 0x0C, 0x07, 0x0C, 0x0F, 0x07, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x07, 0x04, 0x07, 0x07, 0x0C, 0x04, 0x0C, 0x07, 0x0C, 0x04, 0x0C, 0x07, 0x04, 0x07, 0x0C, 0x04, 0x07, 0x04, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x07, 0x04, 0x07, 0x04, 0x07, 0x31, 0x07, 0x07, 0x07, 0x0C, 0x07, 0x07, 0x0C, 0x0C, 0x0C, 0x04, 0x0C, 0x07, 0x07, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x04, 0x37, 0x07, 0x0C, 0x07, 0x07, 0x0C, 0x0C, 0x0C, 0x0C, 0x07, 0x0C, 0x04, 0x0C, 0x04, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x0C, 0x04, 0x07, 0x0F, 0x07, 0x0C, 0x0C, 0x07, 0x07, 0x07, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x07, 0x0C, 0x31, 0x0C, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x07, 0x0C, 0x0C, 0x0C, 0x04, 0x04, 0x07, 0x07, 0x07, 0x04, 0x0C, 0x0C, 0x37, 0x04, 0x0C, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x07, 0x04, 0x07, 0x04, 0x07, 0x07, 0x07, 0x0C, 0x31, 0x07, 0x07, 0x0C, 0x31, 0x04, 0x07, 0x07, 0x0C, 0x31, 0x07, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x07, 0x04, 0x07, 0x04, 0x0C, 0x0C, 0x04, 0x0C, 0x07, 0x0C, 0x07, 0x07, 0x04, 0x07, 0x0C, 0x0C, 0x0C, 0x04, 0x07, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x07, 0x04, 0x07, 0x04, 0x07, 0x07, 0x37, 0x37, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x07, 0x07, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x20, 0x04, 0x04, 0x04, 0x07, 0x04, 0x0C, 0x0C, 0x97, 0x37, 0x0C, 0x0C, 0x0C, 0x31, 0x0C, 0x0C, 0x97, 0x04, 0x0C, 0x04, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x0C, 0x07, 0x07, 0x0C, 0x37, 0x31, 0x0C, 0x37, 0x07, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x0F, 0x0F, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x0C, 0x04, 0x07, 0x04, 0x0C, 0x04, 0x0C, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x0C, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0x0D, 0x38, 0x0C, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x0C, 0x04, 0x07, 0x04, 0x07, 0x0F, 0x0C, 0x0F, 0x19, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x14, 0x0D, 0xA3, 0x0F, 0x04, 0x07, 0x07, 0x07, 0x04, 0x07, 0x04, 0x0C, 0x07, 0x0C, 0x04, 0x31, 0x04, 0x0C, 0x07, 0x07, 0x07, 0x07, 0x04, 0x0C, 0x19, 0x18, 0x18, 0x08, 0x62, 0x08, 0x62, 0x16, 0x00, 0x00,
  0x00, 0x00, 0x91, 0x57, 0x56, 0xDA, 0x9B, 0x57, 0x9C, 0x44, 0x44, 0x45, 0x44, 0x6A, 0x44, 0xD4, 0xA4, 0x9B, 0xD8, 0x54, 0x57, 0x4A, 0x44, 0xD7, 0x45, 0x6A, 0x44, 0x54, 0x89, 0x96, 0xC4, 0xCF, 0xC0, 0x96, 0x85, 0x00, 0x00,
  0x00, 0x00, 0xCD, 0xD9, 0x4B, 0xA7, 0x14, 0xA6, 0x9C, 0x56, 0x45, 0x56, 0x45, 0x4B, 0x4A, 0x56, 0x4B, 0x14, 0xA4, 0xA3, 0xA5, 0x4A, 0x45, 0x4B, 0x4A, 0x4B, 0x4A, 0x0F, 0x87, 0x88, 0x63, 0x65, 0x63, 0x19, 0x81, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1D, 0x1D, 0x76, 0x21, 0x33, 0x21, 0x21, 0x33, 0x21, 0x33, 0x21, 0x21, 0x21, 0x33, 0x21, 0x33, 0x21, 0x33, 0x21, 0x33, 0x21, 0x33, 0x21, 0x21, 0x75, 0x48, 0x48, 0x48, 0x74, 0x48, 0x48, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmQuiver_37x110 = {
  37, // xSize
  110, // ySize
  37, // BytesPerLine
  8, // BitsPerPixel
  _acQuiver_37x110,  // Pointer to picture data (indices)
  &_PalQuiver_37x110   // Pointer to palette
};

/*************************** End of file ****************************/
