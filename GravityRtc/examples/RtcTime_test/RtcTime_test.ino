#include "GravityRtc.h"
#include "Wire.h"  

GravityRtc rtc;     //RTC Initialization

void setup() {
  Serial.begin(9600);
  
  //自动设置RTC时钟：通过获取电脑时间校准RTC模块，首先需要保证电脑时间正确
  rtc.setup();

  //手动设置RTC时钟
  //rtc.adjustRt(2017,6,19,1,12,7,0);  //设置时间：2017/6/19，周一，12点07分0秒
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

