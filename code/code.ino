#include <Servo.h>
#define INCLUDE_KX022_1020
#include <RohmMultiSensor.h>
KX022_1020 sensorAcc;
Servo s1,s2,s3,s4,s5,s6,s7,s8;
int b;
int l;
int f;
int rr;
int t;
int w=0;
char g;
int u=0;
int d=0;
int i=0;
int r=0;
int v=0;
float ss1, ss2, ss3, ss4, ss5, ss6, ss7, ss8;
void setup() 
{
  Wire.begin();
  sensorAcc.init();
  s1.attach(37);  
  s2.attach(35);    
  s3.attach(41);  
  s4.attach(39);
  s5.attach(53);
  s6.attach(51);
  s7.attach(49);
  s8.attach(47);
  Serial.begin(9600);
  newinitial();
  delay(5000);
}
void loop() 
{

  forwardf1();
  left();
  peanuts();
  forwardff();
  right();
  tussock();
}
