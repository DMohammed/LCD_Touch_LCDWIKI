#ifndef LCD_H
#define LCD_H

#include <Arduino.h>
/***************************************************************************************
**                         Section 6: Colour enumeration
***************************************************************************************/
// Default color definitions
#define TFT_BLACK 0x0000                    /*   0,   0,   0 */
#define TFT_NAVY 0x000F                     /*   0,   0, 128 */
#define TFT_DARKGREEN 0x03E0                /*   0, 128,   0 */
#define TFT_DARKCYAN 0x03EF                 /*   0, 128, 128 */
#define TFT_MAROON 0x7800                   /* 128,   0,   0 */
#define TFT_PURPLE 0x780F                   /* 128,   0, 128 */
#define TFT_OLIVE 0x7BE0                    /* 128, 128,   0 */
#define TFT_LIGHTGREY 0xD69A                /* 211, 211, 211 */
#define TFT_DARKGREY 0x7BEF                 /* 128, 128, 128 */
#define TFT_BLUE 0x001F                     /*   0,   0, 255 */
#define TFT_GREEN 0x07E0                    /*   0, 255,   0 */
#define TFT_CYAN 0x07FF                     /*   0, 255, 255 */
#define TFT_RED 0xF800                      /* 255,   0,   0 */
#define TFT_MAGENTA 0xF81F                  /* 255,   0, 255 */
#define TFT_YELLOW 0xFFE0                   /* 255, 255,   0 */
#define TFT_WHITE 0xFFFF                    /* 255, 255, 255 */
#define TFT_ORANGE 0xFDA0                   /* 255, 180,   0 */
#define TFT_GREENYELLOW 0xB7E0              /* 180, 255,   0 */
#define TFT_PINK 0xFE19 /* 255, 192, 203 */ // Lighter pink, was 0xFC9F
#define TFT_BROWN 0x9A60                    /* 150,  75,   0 */
#define TFT_GOLD 0xFEA0                     /* 255, 215,   0 */
#define TFT_SILVER 0xC618                   /* 192, 192, 192 */
#define TFT_SKYBLUE 0x867D                  /* 135, 206, 235 */
#define TFT_VIOLET 0x915C                   /* 180,  46, 226 */
class LCDHelper
{
public:
    LCDHelper();
    void bootUp(byte Set_Rotation);
    void drowColorBoxs();
    void drawPoint();
    void setSizePoint(byte size = 0);

private:
    int xpo, ypo = 0;
    bool Calibration;

    byte BOXSIZE;
    byte sizePoint = 0;
    int TouchPointX[2] = {0, 1000};
    int TouchPointY[2] = {0, 1000};

    void centerPrint(const char *s, int y);
    void drawCrossHair(int y, int x, uint16_t color);
    void calibrate();
};

#endif