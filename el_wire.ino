#include "constants.h";
#include <OneWire.h>
#include <DallasTemperature.h>
#include "nixie.h";

Nixie nixie1(DISPLAY_1, sizeof(DISPLAY_1)/sizeof(DISPLAY_1[0]));
Nixie nixie2(DISPLAY_2, sizeof(DISPLAY_2)/sizeof(DISPLAY_2[0]));
Nixie nixie3(DISPLAY_3, sizeof(DISPLAY_3)/sizeof(DISPLAY_3[0]));
const byte ONEWIRE_PIN = 2;

OneWire onewire(ONEWIRE_PIN);
DallasTemperature sensors(&onewire);

void setup() {
  while(!Serial);
  Serial.begin(9600);
  sensors.begin();
  nixie1.test();
  nixie2.test();
  nixie3.test();
}

void loop() {
  sensors.requestTemperaturesByAddress(deviceAddress);
  const float temp = sensors.getTempC(deviceAddress);
  const String tempStr = String(temp, 1);
  Serial.println(tempStr);
  
  nixie1.display(tempStr.substring(0,1).toInt());
  nixie2.display(tempStr.substring(1,2).toInt());
  nixie3.display(tempStr.substring(3,4).toInt());
  delay(INTERVAL);
}
