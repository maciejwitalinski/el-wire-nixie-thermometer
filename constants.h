 #ifndef CONSTANTS_H
#define CONSTANTS_H
#include <DallasTemperature.h>

byte DISPLAY_1[] = {8, 9, 10, 11, 12};
byte DISPLAY_2[] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
byte DISPLAY_3[] = {32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
DeviceAddress deviceAddress = {0x28, 0x79, 0x27, 0x76, 0xE0, 0x01, 0x3C, 0x06};
int INTERVAL = 1000;

#endif
