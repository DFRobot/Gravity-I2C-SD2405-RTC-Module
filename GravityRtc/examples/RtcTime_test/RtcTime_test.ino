#include "GravityRtc.h"
#include "Wire.h"  

GravityRtc rtc;     //RTC Initialization

void setup() {
  Serial.begin(9600);
  
  
  rtc.setup();

  //Set the RTC time automatically: Calibrate RTC time by your computer time
  rtc.init(F(__DATE__), F(__TIME__)); 
  
  //Set the RTC time manually
  //rtc.adjustRt(2017,6,19,1,12,7,0);  //Set time: 2017/6/19, Monday, 12:07:00
}

void loop() {
  rtc.read();
  //*************************Time********************************
  Serial.print("   Year = ");//year
  Serial.print(rtc.year);
  Serial.print("   Month = ");//month
  Serial.print(rtc.month);
  Serial.print("   Day = ");//day
  Serial.print(rtc.day);
  Serial.print("   Week = ");//week
  Serial.print(rtc.week);
  Serial.print("   Hour = ");//hour
  Serial.print(rtc.hour);
  Serial.print("   Minute = ");//minute
  Serial.print(rtc.minute);
  Serial.print("   Second = ");//second
  Serial.println(rtc.second);
  delay(1000);

}

