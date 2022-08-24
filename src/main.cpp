// #include <Arduino.h>
// #include <LCDHelper.h>

// // IMPORTANT: LCDWIKI_KBV LIBRARY MUST BE SPECIFICALLY
// // CONFIGURED FOR EITHER THE TFT SHIELD OR THE BREAKOUT BOARD.
// // GO TO LCDHelper.h AND CONFIG YOUR LCD AND TouchScreen
// // REMMBER CHAKE YOUR PINOUT FOR LCD AND TouchScreen
// // THIS CODE CALIBRATE TouchScreen AUTOMATIC AND SAVE ON EEPROM AFTER THAT YOU CAN SELECT SKIP IN BOOT UP
// // LCD CONFIG IS IN LINE  26 - 56
// // TouchScreen CONFIG IS IN LINE 63-66
// LCDHelper lcdhelper;

// #include <MD_TCS230.h>
// #include <FreqCount.h>

// // Pin definitions
// #define S0_OUT 9
// #define S1_OUT 10
// #define S2_OUT 11
// #define S3_OUT 12
// #define OE_OUT 8 // LOW = ENABLED

// #define button 13

// MD_TCS230 CS(S2_OUT, S3_OUT, S0_OUT, S1_OUT, OE_OUT);

// void setup()
// {
//   Serial.begin(9600);
//   lcdhelper.bootUp(3);
//   lcdhelper.setSizePoint(1);

//   Serial.println("[TCS230 Simple NON_BLOCKING Example]");
//   Serial.println("\nMove the sensor to different color to see the RGB value");
//   Serial.println("Note: These values are being read in without sensor calibration");
//   Serial.println("and are likely to be far from reality");

//   CS.begin();
// }

// void readSensor()
// {
//   static bool waiting;

//   if (!waiting)
//   {
//     CS.read();
//     waiting = true;
//   }
//   else
//   {
//     if (CS.available())
//     {
//       colorData rgb;

//       CS.getRGB(&rgb);
//       Serial.print("RGB [");
//       Serial.print(rgb.value[TCS230_RGB_R]);
//       Serial.print(",");
//       Serial.print(rgb.value[TCS230_RGB_G]);
//       Serial.print(",");
//       Serial.print(rgb.value[TCS230_RGB_B]);
//       Serial.println("]");

//       lcdhelper.setDrawColor(rgb.value[TCS230_RGB_R], rgb.value[TCS230_RGB_G], rgb.value[TCS230_RGB_B]);

//       waiting = false;
//     }
//   }
// }

// void loop()
// {
//   lcdhelper.drawPoint();

//   while (digitalRead(button))
//   {
//     // readSensor();
//     delay(100);
//     if (!digitalRead(button))
//     {
//       delay(500);
//       if (!digitalRead(button))
//         break;
//     }
//   }
// }

#include <Arduino.h>
#include "LCDHelper.h"

// IMPORTANT: LCDWIKI_KBV LIBRARY MUST BE SPECIFICALLY
// CONFIGURED FOR EITHER THE TFT SHIELD OR THE BREAKOUT BOARD.
// GO TO LCDHelper.h AND CONFIG YOUR LCD AND TouchScreen
// REMEMBER TO CHECK YOUR PINOUT FOR LCD AND TouchScreen
// THIS CODE CALIBRATES THE TouchScreen AUTOMATICCALLY AND SAVES IT ON EEPROM. AFTER THAT YOU CAN SELECT SKIP IN BOOT UP
// LCD CONFIG IS IN LINES  26 - 56
// TouchScreen CONFIG IS IN LINES 63-66
LCDHelper lcdhelper;

void setup()
{
  Serial.begin(9600);
  lcdhelper.bootUp(3);
  lcdhelper.setSizePoint(1);
}

void loop()
{
  lcdhelper.drawPoint();
}
