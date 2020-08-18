#include<servo.h>
Servo servo_1;
Servo servo_2;
void setup() 
{
  Serial.begin(9600);
  servo_1.attach(14);
  servo_2.attach(15);
}

void loop() 
{
  while(Serial.available())
  {
    char input=Serial.read();
    if(input=='g')
    {
      servo_1.write(180);
      servo_2,write(180);
    }
    else
    if(input=='h')
    {
      servo_1.write(0);
      servo_2,write(0);
    }
  }
}
