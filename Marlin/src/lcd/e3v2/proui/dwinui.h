/**
 * DWIN Enhanced graphics implementation for PRO UI
 * Author: Miguel A. Risco-Castillo (MRISCOC)
 * Version: 4.2.1
 * Date: 2023/09/30
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "../../../inc/MarlinConfigPre.h"

#include "../common/dwin_set.h"
#include "../common/dwin_font.h"
#include "../common/dwin_color.h"
#include "dwin_lcd.h"

// Extra Icons
// CI(0,I) uses custom library  9.ICO
// CI(1,I) uses custom library 10.ICO
#define CI(L,I) (I TERN_(HAS_CUSTOMICONS, + L*100))

#undef ICON_Folder
#undef ICON_AdvSet
#undef ICON_HomeOffset
#undef ICON_HomeOffsetX
#undef ICON_HomeOffsetY
#undef ICON_HomeOffsetZ
#undef ICON_ProbeOffset
#undef ICON_ProbeOffsetX
#undef ICON_ProbeOffsetY
#undef ICON_ProbeOffsetZ
#undef ICON_PIDNozzle
#undef ICON_PIDbed

#define ICON_AdvSet            CI(1,ICON_Language)
#define ICON_BedSizeX          CI(1,ICON_PrintSize)
#define ICON_BedSizeY          CI(1,ICON_PrintSize)
#define ICON_BedTramming       CI(1,ICON_SetHome)
#define ICON_Binary            CI(1,ICON_Contact)
#define ICON_BltouchReset      CI(1,ICON_StockConfiguration)
#define ICON_Brightness        CI(1,ICON_Motion)
#define ICON_Cancel            CI(1,ICON_StockConfiguration)
#define ICON_CustomPreheat     CI(1,ICON_SetEndTemp)
#define ICON_Error             CI(1,ICON_TempTooHigh)
#define ICON_ESDiag            CI(1,ICON_Info)
#define ICON_ExtrudeMinT       CI(1,ICON_HotendTemp)
#define ICON_FilLoad           CI(1,ICON_WriteEEPROM)
#define ICON_FilMan            CI(1,ICON_ResumeEEPROM)
#define ICON_FilRunOut         CI(1,ICON_MaxAccE)
#define ICON_FilSet            CI(1,ICON_ResumeEEPROM)
#define ICON_FilUnload         CI(1,ICON_ReadEEPROM)
#define ICON_Flow              CI(1,ICON_StepE)
#define ICON_Folder            CI(1,ICON_More)
#define ICON_FWRetract         CI(1,ICON_StepE)
#define ICON_FWRetLength       CI(1,ICON_StepE)
#define ICON_FWRetSpeed        CI(1,ICON_Setspeed)
#define ICON_FWRetZRaise       CI(1,ICON_MoveZ)
#define ICON_FWRecSpeed        CI(1,ICON_Setspeed)
#define ICON_FWRecExtra        CI(1,ICON_StepE)
#define ICON_HomeX             CI(1,ICON_MoveX)
#define ICON_HomeY             CI(1,ICON_MoveY)
#define ICON_HomeZ             CI(1,ICON_MoveZ)
#define ICON_HomeOffset        CI(1,ICON_AdvSet)
#define ICON_HomeOffsetX       CI(1,ICON_StepX)
#define ICON_HomeOffsetY       CI(1,ICON_StepY)
#define ICON_HomeOffsetZ       CI(1,ICON_StepZ)
#define ICON_Host              CI(1,ICON_Contact)
#define ICON_HSMode            CI(1,ICON_StockConfiguration)
#define ICON_InputShaping      CI(1,ICON_MaxAccelerated)
#define ICON_InvertE0          CI(1,ICON_StepE)
#define ICON_JDmm              CI(1,ICON_MaxJerk)
#define ICON_Tram              CI(1,ICON_SetEndTemp)
#define ICON_LaserFocus        CI(1,ICON_MoveZ)
#define ICON_LaserPrint        CI(1,ICON_StockConfiguration)
#define ICON_LaserRunRange     CI(1,ICON_PrintSize)
#define ICON_LaserSet          CI(1,ICON_StockConfiguration)
#define ICON_LaserToggle       CI(1,ICON_Motion)
#define ICON_Level             CI(1,ICON_HotendTemp)
#define ICON_Lock              CI(1,ICON_Cool)
#define ICON_ManualMesh        CI(1,ICON_HotendTemp)
#define ICON_MaxPosX           CI(1,ICON_MoveX)
#define ICON_MaxPosY           CI(1,ICON_MoveY)
#define ICON_MaxPosZ           CI(1,ICON_MoveZ)
#define ICON_MeshEdit          CI(1,ICON_Homing)
#define ICON_MeshEditX         CI(1,ICON_MoveX)
#define ICON_MeshEditY         CI(1,ICON_MoveY)
#define ICON_MeshEditZ         CI(1,ICON_MoveZ)
#define ICON_MeshNext          CI(1,ICON_Axis)
#define ICON_MeshPointsX       CI(1,ICON_SetEndTemp)
#define ICON_MeshPointsY       CI(1,ICON_SetEndTemp)
#define ICON_MeshReset         CI(1,ICON_StockConfiguration)
#define ICON_MeshSave          CI(1,ICON_WriteEEPROM)
#define ICON_MeshViewer        CI(1,ICON_HotendTemp)
#define ICON_MoveZ0            CI(1,ICON_HotendTemp)
#define ICON_Park              CI(1,ICON_Motion)
#define ICON_ParkPos           CI(1,ICON_AdvSet)
#define ICON_ParkPosX          CI(1,ICON_StepX)
#define ICON_ParkPosY          CI(1,ICON_StepY)
#define ICON_ParkPosZ          CI(1,ICON_StepZ)
#define ICON_PhySet            CI(1,ICON_PrintSize)
#define ICON_PIDNozzle         CI(1,ICON_SetEndTemp)
#define ICON_PIDBed            CI(1,ICON_SetBedTemp)
#define ICON_PIDCycles         CI(1,ICON_ResumeEEPROM)
#define ICON_PIDValue          CI(1,ICON_Contact)
#define ICON_PrintStats        CI(1,ICON_PrintTime)
#define ICON_Preheat1          CI(1,ICON_PLAPreheat)
#define ICON_Preheat2          CI(1,ICON_ABSPreheat)
#define ICON_Preheat3          CI(1,ICON_CustomPreheat)
#define ICON_Preheat4          CI(1,ICON_CustomPreheat)
#define ICON_Preheat5          CI(1,ICON_CustomPreheat)
#define ICON_Preheat6          CI(1,ICON_CustomPreheat)
#define ICON_Preheat7          CI(1,ICON_CustomPreheat)
#define ICON_Preheat8          CI(1,ICON_CustomPreheat)
#define ICON_Preheat9          CI(1,ICON_CustomPreheat)
#define ICON_Preheat10         CI(1,ICON_CustomPreheat)
#define ICON_PrintStatsReset   CI(1,ICON_RemainTime)
#define ICON_ProbeDeploy       CI(1,ICON_SetEndTemp)
#define ICON_ProbeMargin       CI(1,ICON_PrintSize)
#define ICON_ProbeMultiple     CI(1,ICON_SetHome)
#define ICON_ProbeOffsetX      CI(1,ICON_StepX)
#define ICON_ProbeOffsetY      CI(1,ICON_StepY)
#define ICON_ProbeOffsetZ      CI(1,ICON_StepZ)
#define ICON_ProbeSet          CI(1,ICON_SetEndTemp)
#define ICON_ProbeStow         CI(1,ICON_SetEndTemp)
#define ICON_ProbeTest         CI(1,ICON_SetEndTemp)
#define ICON_ProbeZSpeed       CI(1,ICON_MaxSpeedZ)
#define ICON_Pwrlossr          CI(1,ICON_Motion)
#define ICON_Reboot            CI(1,ICON_ResumeEEPROM)
#define ICON_Runout            CI(1,ICON_MaxAccE)
#define ICON_Scolor            CI(1,ICON_MaxSpeed)
#define ICON_SetBaudRate       CI(1,ICON_Setspeed)
#define ICON_SetCustomPreheat  CI(1,ICON_SetEndTemp)
#define ICON_SetPreheat1       CI(1,ICON_SetPLAPreheat)
#define ICON_SetPreheat2       CI(1,ICON_SetABSPreheat)
#define ICON_SetPreheat3       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat4       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat5       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat6       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat7       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat8       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat9       CI(1,ICON_SetCustomPreheat)
#define ICON_SetPreheat10      CI(1,ICON_SetCustomPreheat)
#define ICON_ShapingX          CI(1,ICON_MoveX)
#define ICON_ShapingY          CI(1,ICON_MoveY)
#define ICON_Sound             CI(1,ICON_Cool)
#define ICON_TBSetup           CI(1,ICON_Contact)
#define ICON_TMCSet            CI(1,ICON_PrintSize)
#define ICON_TMCXSet           CI(1,ICON_MoveX)
#define ICON_TMCYSet           CI(1,ICON_MoveY)
#define ICON_TMCZSet           CI(1,ICON_MoveZ)
#define ICON_TMCESet           CI(1,ICON_Extruder)
#define ICON_UBLActive         CI(1,ICON_HotendTemp)
#define ICON_UBLSlot           CI(1,ICON_ResumeEEPROM)
#define ICON_UBLMeshSave       CI(1,ICON_WriteEEPROM)
#define ICON_UBLMeshLoad       CI(1,ICON_ReadEEPROM)
#define ICON_UBLTiltGrid       CI(1,ICON_PrintSize)
#define ICON_UBLSmartFill      CI(1,ICON_StockConfiguration)
#define ICON_ZAfterHome        CI(1,ICON_SetEndTemp)

//LED Lights
#define ICON_CaseLight         CI(1,ICON_Motion)
#define ICON_LedControl        CI(1,ICON_Motion)

//MPC
#define ICON_MPCNozzle         CI(1,ICON_SetEndTemp)
#define ICON_MPCValue          CI(1,ICON_Contact)
#define ICON_MPCHeater         CI(1,ICON_Temperature)
#define ICON_MPCHeatCap        CI(1,ICON_SetBedTemp)
#define ICON_MPCFan            CI(1,ICON_FanSpeed)

// Buttons
#define BTN_Continue          85
#define BTN_Cancel            87
#define BTN_Confirm           89
#define BTN_Print             90
#define BTN_Save              91
#define BTN_Purge             92

// UI element defines and constants
#define DWIN_FONT_MENU font8x16
#define DWIN_FONT_STAT font10x20
#define DWIN_FONT_HEAD font10x20
#define DWIN_FONT_ALERT font10x20
#define STATUS_Y 354
#define LCD_WIDTH (DWIN_WIDTH / 8)  // only if the default fontID is font8x16

// Minimum unit (0.1) : multiple (10)
#define UNITFDIGITS 1
#define MINUNITMULT POW(10, UNITFDIGITS)

constexpr uint8_t  TITLE_HEIGHT = 30,                          // Title bar height
                   MLINE = 53,                                 // Menu line height
                   TROWS = (STATUS_Y - TITLE_HEIGHT) / MLINE,  // Total rows
                   MROWS = TROWS - 1,                          // Other-than-Back
                   ICOX = 26,                                  // Menu item icon X position
                   LBLX = 55,                                  // Menu item label X position
                   VALX = 210,                                 // Menu item value X position
                   MENU_CHR_W = 8, MENU_CHR_H = 16,            // Menu font 8x16
                   STAT_CHR_W = 10;

// Menuitem Y position
#define MYPOS(L) (TITLE_HEIGHT + MLINE * (L))

// Menuitem caption Offset
#define CAPOFF ((MLINE - MENU_CHR_H) / 2)

// Menuitem caption Y position
#define MBASE(L) (MYPOS(L) + CAPOFF)

typedef struct { uint16_t left, top, right, bottom; } rect_t;
typedef struct { uint16_t x, y, w, h; } frame_rect_t;

class Title {
public:
  static uint16_t textColor;
  static uint16_t backColor;
  static void draw(const char * const caption);
  static inline void draw(FSTR_P fcaption) { draw((char *)fcaption); }
};
extern Title title;

namespace DWINUI {
  extern xy_int_t cursor;
  extern uint16_t penColor;
  extern uint16_t textColor;
  extern uint16_t backColor;
  extern uint16_t buttonColor;
  extern fontid_t fontID;

  // DWIN LCD Initialization
  void init();

  // Set text/number font
  void setFont(fontid_t cfont);

  // Get font character width
  uint8_t fontWidth(fontid_t cfont);
  inline uint8_t fontWidth() { return fontWidth(fontID); };

  // Get font character height
  uint8_t fontHeight(fontid_t cfont);
  inline uint8_t fontHeight() { return fontHeight(fontID); };

  // Get screen x coordinates from text column
  uint16_t colToX(uint8_t col);

  // Get screen y coordinates from text row
  uint16_t rowToY(uint8_t row);

  // Set text/number color
  void setColors(uint16_t fgcolor, uint16_t bgcolor, uint16_t alcolor);
  void setTextColor(uint16_t fgcolor);
  void setBackgroundColor(uint16_t bgcolor);

  // Moves cursor to point
  //  x: abscissa of the display
  //  y: ordinate of the display
  //  point: xy coordinate
  void moveTo(int16_t x, int16_t y);
  void moveTo(xy_int_t point);

  // Moves cursor relative to the actual position
  //  x: abscissa of the display
  //  y: ordinate of the display
  //  point: xy coordinate
  void moveBy(int16_t x, int16_t y);
  void moveBy(xy_int_t point);

  // Draw a line from the cursor to xy position
  //  color: Line segment color
  //  x/y: End point
  inline void lineTo(uint16_t color, uint16_t x, uint16_t y) {
    dwinDrawLine(color, cursor.x, cursor.y, x, y);
  }
  inline void lineTo(uint16_t x, uint16_t y) {
    dwinDrawLine(penColor, cursor.x, cursor.y, x, y);
  }

  // Extend a frame box
  //  v: value to extend
  inline frame_rect_t extendFrame(frame_rect_t frame, uint8_t v) {
    frame_rect_t t;
    t.x = frame.x - v;
    t.y = frame.y - v;
    t.w = frame.w + 2 * v;
    t.h = frame.h + 2 * v;
    return t;
  }

  // Draw an Icon and select library automatically
  //  BG: The icon background display: false=Background filtering is not displayed, true=Background display
  //  libID: Icon library ID
  //  picID: Icon ID
  //  x/y: Upper-left point
  void iconShow(bool BG, uint8_t icon, uint16_t x, uint16_t y);

  // Draw an Icon with transparent background from the library ICON
  //  icon: Icon ID
  //  x/y: Upper-left point
  inline void drawIcon(uint8_t icon, uint16_t x, uint16_t y) {
    iconShow(false, icon, x, y);
  }

  // Draw an Icon from the library ICON with its background
  //  icon: Icon ID
  //  x/y: Upper-left point
  inline void drawIconWB(uint8_t icon, uint16_t x, uint16_t y) {
    iconShow(true, icon, x, y);
  }

  // Draw a numeric integer value
  //  bShow: true=display background color; false=don't display background color
  //  signedMode: 1=signed; 0=unsigned
  //  fid: Font ID
  //  color: Character color
  //  bColor: Background color
  //  iNum: Number of digits
  //  x/y: Upper-left coordinate
  //  value: Integer value
  void drawInt(uint8_t bShow, bool signedMode, fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, int32_t value);

  // Draw a positive integer
  inline void drawInt(uint8_t bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(bShow, 0, fid, color, bColor, iNum, x, y, value);
  }
  inline void drawInt(uint8_t iNum, long value) {
    drawInt(false, 0, fontID, textColor, backColor, iNum, cursor.x, cursor.y, value);
    moveBy(iNum * fontWidth(fontID), 0);
  }
  inline void drawInt(uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(false, 0, fontID, textColor, backColor, iNum, x, y, value);
  }
  inline void drawInt(uint16_t color, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(false, 0, fontID, color, backColor, iNum, x, y, value);
  }
  inline void drawInt(uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(true, 0, fontID, color, bColor, iNum, x, y, value);
  }
  inline void drawInt(fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(true, 0, fid, color, bColor, iNum, x, y, value);
  }

  // Draw a signed integer
  inline void drawSignedInt(uint8_t bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(bShow, 1, fid, color, bColor, iNum, x, y, value);
  }
  inline void drawSignedInt(uint8_t iNum, long value) {
    drawInt(false, 1, fontID, textColor, backColor, iNum, cursor.x, cursor.y, value);
    moveBy(iNum * fontWidth(fontID), 0);
  }
  inline void drawSignedInt(uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(false, 1, fontID, textColor, backColor, iNum, x, y, value);
  }
  inline void drawSignedInt(uint16_t color, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(false, 1, fontID, color, backColor, iNum, x, y, value);
  }
  inline void drawSignedInt(uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(true, 1, fontID, color, bColor, iNum, x, y, value);
  }
  inline void drawSignedInt(fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint16_t x, uint16_t y, long value) {
    drawInt(true, 1, fid, color, bColor, iNum, x, y, value);
  }

  // Draw a numeric float value
  //  bShow: true=display background color; false=don't display background color
  //  signedMode: 1=signed; 0=unsigned
  //  fid: Font ID
  //  color: Character color
  //  bColor: Background color
  //  iNum: Number of digits
  //  fNum: Number of decimal digits
  //  x/y: Upper-left coordinate
  //  value: float value
  void drawFloat(uint8_t bShow, bool signedMode, fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value);

  // Draw a positive floating point number
  inline void drawFloat(uint8_t bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(bShow, 0, fid, color, bColor, iNum, fNum, x, y, value);
  }
  inline void drawFloat(uint8_t iNum, uint8_t fNum, float value) {
    drawFloat(false, 0, fontID, textColor, backColor, iNum, fNum, cursor.x, cursor.y, value);
    moveBy((iNum + fNum + 1) * fontWidth(fontID), 0);
  }
  inline void drawFloat(uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(false, 0, fontID, textColor, backColor, iNum, fNum, x, y, value);
  }
  inline void drawFloat(fontid_t fid, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(false, 0, fid, textColor, backColor, iNum, fNum, x, y, value);
  }
  inline void drawFloat(uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(true, 0, fontID, color, bColor, iNum, fNum, x, y, value);
  }
  inline void drawFloat(fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(true, 0, fid, color, bColor, iNum, fNum, x, y, value);
  }

  // Draw a signed floating point number
  inline void drawSignedFloat(uint8_t bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(bShow, 1, fid, color, bColor, iNum, fNum, x, y, value);
  }
  inline void drawSignedFloat(uint8_t iNum, uint8_t fNum, float value) {
    drawFloat(false, 1, fontID, textColor, backColor, iNum, fNum, cursor.x, cursor.y, value);
    moveBy((iNum + fNum + 1) * fontWidth(fontID), 0);
  }
  inline void drawSignedFloat(uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(false, 1, fontID, textColor, backColor, iNum, fNum, x, y, value);
  }
  inline void drawSignedFloat(fontid_t fid, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(false, 1, fid, textColor, backColor, iNum, fNum, x, y, value);
  }
  inline void drawSignedFloat(uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(true, 1, fontID, color, bColor, iNum, fNum, x, y, value);
  }
  inline void drawSignedFloat(fontid_t fid, uint16_t color, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, float value) {
    drawFloat(true, 1, fid, color, bColor, iNum, fNum, x, y, value);
  }

  // Draw a char
  //  color: Character color
  //  x: abscissa of the display
  //  y: ordinate of the display
  //  c: ASCII code of char
  void drawChar(uint16_t color, uint16_t x, uint16_t y, const char c);
  inline void drawChar(uint16_t x, uint16_t y, const char c) { drawChar(textColor, x, y, c); };
  // Draw a char at cursor position and increment cursor
  void drawChar(uint16_t color, const char c);
  inline void drawChar(const char c) { drawChar(textColor, c); }

  // Draw a string at cursor position
  //  color: Character color
  //  *string: The string
  //  rlimit: For draw less chars than string length use rlimit
  void drawString(const char * const string, uint16_t rlimit = 0xFFFF);
  void drawString(uint16_t color, const char * const string, uint16_t rlimit = 0xFFFF);
  inline void drawString(FSTR_P  string, uint16_t rlimit = 0xFFFF) {
    drawString(FTOP(string), rlimit);
  }
  inline void drawString(uint16_t color, FSTR_P string, uint16_t rlimit = 0xFFFF) {
    drawString(color, FTOP(string), rlimit);
  }

  // Draw a string
  //  fid: Font ID
  //  color: Character color
  //  bColor: Background color
  //  x/y: Upper-left coordinate of the string
  //  *string: The string
  inline void drawString(uint16_t x, uint16_t y, const char * const string) {
    dwinDrawString(false, fontID, textColor, backColor, x, y, string);
  }
  inline void drawString(uint16_t x, uint16_t y, FSTR_P fTitle) {
    dwinDrawString(false, fontID, textColor, backColor, x, y, FTOP(fTitle));
  }
  inline void drawString(uint16_t color, uint16_t x, uint16_t y, const char * const string) {
    dwinDrawString(false, fontID, color, backColor, x, y, string);
  }
  inline void drawString(uint16_t color, uint16_t x, uint16_t y, FSTR_P fTitle) {
    dwinDrawString(false, fontID, color, backColor, x, y, fTitle);
  }
  inline void drawString(uint16_t color, uint16_t bgcolor, uint16_t x, uint16_t y, const char * const string) {
    dwinDrawString(true, fontID, color, bgcolor, x, y, string);
  }
  inline void drawString(uint16_t color, uint16_t bgcolor, uint16_t x, uint16_t y, FSTR_P fTitle) {
    dwinDrawString(true, fontID, color, bgcolor, x, y, fTitle);
  }
  inline void drawString(fontid_t fid, uint16_t color, uint16_t bgcolor, uint16_t x, uint16_t y, const char * const string) {
    dwinDrawString(true, fid, color, bgcolor, x, y, string);
  }
  inline void drawString(fontid_t fid, uint16_t color, uint16_t bgcolor, uint16_t x, uint16_t y, FSTR_P fTitle) {
    dwinDrawString(true, fid, color, bgcolor, x, y, fTitle);
  }

  // Draw a centered string using DWIN_WIDTH
  //  bShow: true=display background color; false=don't display background color
  //  fid: Font ID
  //  color: Character color
  //  bColor: Background color
  //  y: Upper coordinate of the string
  //  *string: The string
  void drawCenteredString(bool bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint16_t x1, uint16_t x2, uint16_t y, const char * const string);
  inline void drawCenteredString(bool bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint16_t x, uint16_t y, const char * const string) {
    drawCenteredString(bShow, fid, color, bColor, 2 * x, 0, y, string);
  }
  inline void drawCenteredString(bool bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint16_t y, const char * const string) {
    drawCenteredString(bShow, fid, color, bColor, 0, DWIN_WIDTH, y, string);
  }
  inline void drawCenteredString(bool bShow, fontid_t fid, uint16_t color, uint16_t bColor, uint16_t y, FSTR_P string) {
    drawCenteredString(bShow, fid, color, bColor, y, FTOP(string));
  }
  inline void drawCenteredString(uint16_t color, uint16_t bcolor, uint16_t y, const char * const string) {
    drawCenteredString(true, fontID, color, bcolor, y, string);
  }
  inline void drawCenteredString(fontid_t fid, uint16_t color, uint16_t y, const char * const string) {
    drawCenteredString(false, fid, color, backColor, y, string);
  }
  inline void drawCenteredString(fontid_t fid, uint16_t color, uint16_t y, FSTR_P fTitle) {
    drawCenteredString(false, fid, color, backColor, y, fTitle);
  }
  inline void drawCenteredString(uint16_t color, uint16_t y, const char * const string) {
    drawCenteredString(false, fontID, color, backColor, y, string);
  }
  inline void drawCenteredString(uint16_t color, uint16_t y, FSTR_P fTitle) {
    drawCenteredString(false, fontID, color, backColor, y, fTitle);
  }
  inline void drawCenteredString(uint16_t y, const char * const string) {
    drawCenteredString(false, fontID, textColor, backColor, y, string);
  }
  inline void drawCenteredString(uint16_t y, FSTR_P fTitle) {
    drawCenteredString(false, fontID, textColor, backColor, y, fTitle);
  }

  // Draw a box
  //  mode: 0=frame, 1=fill, 2=XOR fill
  //  color: Rectangle color
  //  frame: Box coordinates and size
  inline void drawBox(uint8_t mode, uint16_t color, frame_rect_t frame) {
    dwinDrawBox(mode, color, frame.x, frame.y, frame.w, frame.h);
  }

  // Draw a circle
  //  Color: circle color
  //  x: abscissa of the center of the circle
  //  y: ordinate of the center of the circle
  //  r: circle radius
  void drawCircle(uint16_t color, uint16_t x,uint16_t y,uint8_t r);
  inline void drawCircle(uint16_t color, uint8_t r) {
    drawCircle(color, cursor.x, cursor.y, r);
  }

  // Draw a checkbox
  //  Color: frame color
  //  bColor: Background color
  //  x/y: Upper-left point
  //  checked : 0 : unchecked, 1 : checked
  void drawCheckbox(uint16_t color, uint16_t bcolor, uint16_t x, uint16_t y, bool checked);
  inline void drawCheckbox(uint16_t x, uint16_t y, bool checked=false) {
    drawCheckbox(textColor, backColor, x, y, checked);
  }

  // Color Interpolator
  //  val : Interpolator minv..maxv
  //  minv : Minimum value
  //  maxv : Maximum value
  //  color1 : Start color
  //  color2 : End color
  uint16_t colorInt(int16_t val, int16_t minv, int16_t maxv, uint16_t color1, uint16_t color2);

  // -------------------------- Title -------------------------------//

  void drawTitle(uint16_t color, uint16_t bcolor, Title* aTitle);

  // ------------------------- Buttons ------------------------------//

  void drawButton(uint16_t color, uint16_t bcolor, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, const char * const caption);
  inline void drawButton(uint16_t color, uint16_t bcolor, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, FSTR_P caption) {
    drawButton(color, bcolor, x1, y1, x2, y2, FTOP(caption));
  }
  inline void drawButton(FSTR_P caption, uint16_t x, uint16_t y) {
    drawButton(textColor, buttonColor, x, y, x + 99, y + 37, caption);
  }
  void drawButton(uint8_t id, uint16_t x, uint16_t y);

  // -------------------------- Extra -------------------------------//

  // Draw a circle filled with color
  //  bcolor: fill color
  //  x: abscissa of the center of the circle
  //  y: ordinate of the center of the circle
  //  r: circle radius
  void drawFillCircle(uint16_t bcolor, uint16_t x,uint16_t y,uint8_t r);
  inline void drawFillCircle(uint16_t bcolor, uint8_t r) {
    drawFillCircle(bcolor, cursor.x, cursor.y, r);
  }

  // Color Interpolator through Red->Yellow->Green->Blue
  //  val : Interpolator minv..maxv
  //  minv : Minimum value
  //  maxv : Maximum value
  uint16_t rainbowInt(const int16_t val, const int16_t minv, const int16_t maxv);

  // Write buffer data to the SRAM
  //  addr: SRAM start address 0x0000-0x7FFF
  //  length: Bytes to write
  //  data: address of the buffer with data
  inline void writeToSRAM(uint16_t addr, uint16_t length, uint8_t *data) {
    dwinWriteToMem(0x5A, addr, length, data);
  }

  // Write buffer data to the Flash
  //  addr: Flash start address 0x0000-0x3FFF
  //  length: Bytes to write
  //  data: address of the buffer with data
  inline void writeToFlash(uint16_t addr, uint16_t length, uint8_t *data) {
    dwinWriteToMem(0xA5, addr, length, data);
  }

  // Clear by filling the area with background color
  // Area (0, TITLE_HEIGHT, DWIN_WIDTH, STATUS_Y - 1)
  void clearMainArea();

};
