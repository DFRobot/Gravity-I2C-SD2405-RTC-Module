#include "GravityRtc.h"
#include "Wire.h"  

//时钟模块
GravityRtc rtc;

void setup() {
  Serial.begin(9600);
    rtc.setup();
//rtc.initRtc(2017,6,19,1,12,7,0);//年月日周时分秒

}

void loop() {
  rtc.update();
//*************************时间********************************
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
