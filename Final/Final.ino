#include<servo.h>

//------------------------------------------------------------------------------------------------------------//
#define Motor_Left_1_F 1                      
#define Motor_Left_1_B 2           
#define Motor_Right_1_F 3 
#define Motor_Right_1_B 4
#define Motor_Left_2_F 5
#define Motor_Left_2_B 6          //Pins of Motors for movement
#define Motor_Right_2_F 7 
#define Motor_Right_2_B 8
#define Motor_Left_3_F 9 
#define Motor_Left_3_B 10        
#define Motor_Right_3_F 11
#define Motor_Right_3_B 12 
//-------------------------------------------------------------------------------------------------------------//
#define J_Motor_1F 23
#define J_Motor_1B 25           //Pins of Motors For Lifting
#define J_Motor_2F 27  
#define J_Motor_2B 29   
//-------------------------------------------------------------------------------------------------------------//
Servo servo_1;
Servo servo_2;                 //Servo Initialisation
//-------------------------------------------------------------------------------------------------------------//
#define relay1 6 
#define relay2 7               //Relay for actuator
//--------------------------------------------------------------------------------------------------------------//
#define left_sensor_pin A0
#define right_sensor_pin A1            //Pins for IR sensor
//--------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------//
int left_sensor_state;                //IR sensor state variable
int right_sensor_state;
//---------------------------------------------------------------------------------------------------------------//
void setup() 
{
  Serial.begin(9600); 
  pinMode(Motor_Left_1_F,OUTPUT);
  pinMode(Motor_Left_1_B,OUTPUT);
  pinMode(Motor_Left_2_F,OUTPUT);
  pinMode(Motor_Left_2_B,OUTPUT);
  pinMode(Motor_Left_3_F,OUTPUT);
  pinMode(Motor_Left_3_B,OUTPUT);
  pinMode(Motor_Right_1_F,OUTPUT);
  pinMode(Motor_Right_1_B,OUTPUT);
  pinMode(Motor_Right_2_F,OUTPUT);
  pinMode(Motor_Right_2_B,OUTPUT);
  pinMode(Motor_Right_3_F,OUTPUT);
  pinMode(Motor_Right_3_B,OUTPUT);
  pinMode(J_Motor_1F,OUTPUT);
  pinMode(J_Motor_1B,OUTPUT);
  pinMode(J_Motor_2F,OUTPUT);
  pinMode(J_Motor_2B,OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(right_sensor_pin,INPUT);
  pinMode(left_sensor_pin,INPUT);
  servo_1.attach(14);
  servo_2.attach(15);
}
void loop() 
{
  while(Serial.available())
  {
    char input=Serial.read();
    {
      if(input=='w')                                   //Move forward
      forward();
      else
      if(input=='s')                                   //Move Back
      backward();
      else
      if(input=='a')                                   //Move Left
      left();
      else
      if(input=='d')                                   //Move Right
      right();
      else
      if(input=='v')                                   //lift middle part
      middleup();
      else
      if(input=='b')                                   //lower middle part
      middledown();
      else
      if(input=='n')                                   //lift rear
      rearup();
      else
      if(input=='m')                                   //lower rear
      reardown();
      else
      if(input=='g')                                   //activate gripper
      {
        servo_1.write(180);
        servo_2,write(270);
      }
      else
      if(input=='h')                                   //deactivate gripper
      {
        servo_1.write(0);
        servo_2,write(180);
      }
      else
      if(input=='t')                                    //extend actuator
      extendA();
      else
      if(input=='y')                                    //retract actuator
      retractA();
      else
      if(input=='u')                                   //stop actuator
      stopA();
      else
      if(input=='q')                                   //activat autonomous line following
      Autobot();
    }
  }
}

void forward()                                   
{
  digitalWrite(Motor_Left_1_F,HIGH);
  digitalWrite(Motor_Left_2_F,HIGH);
  digitalWrite(Motor_Left_3_F,HIGH);
  digitalWrite(Motor_Right_1_F,HIGH);
  digitalWrite(Motor_Right_2_F,HIGH);
  digitalWrite(Motor_Right_3_F,HIGH);
  digitalWrite(Motor_Left_1_B,LOW);
  digitalWrite(Motor_Left_2_B,LOW);
  digitalWrite(Motor_Left_3_B,LOW);
  digitalWrite(Motor_Right_1_B,LOW);
  digitalWrite(Motor_Right_2_B,LOW);
  digitalWrite(Motor_Right_3_B,LOW);
 
}
void backward()
{
  digitalWrite(Motor_Left_1_F,LOW);
  digitalWrite(Motor_Left_2_F,LOW);
  digitalWrite(Motor_Left_3_F,LOW);
  digitalWrite(Motor_Right_1_F,LOW);
  digitalWrite(Motor_Right_2_F,LOW);
  digitalWrite(Motor_Right_3_F,LOW);
  digitalWrite(Motor_Left_1_B,HIGH);
  digitalWrite(Motor_Left_2_B,HIGH);
  digitalWrite(Motor_Left_3_B,HIGH);
  digitalWrite(Motor_Right_1_B,HIGH);
  digitalWrite(Motor_Right_2_B,HIGH);
  digitalWrite(Motor_Right_3_B,HIGH);
}
void left()
{
  digitalWrite(Motor_Left_1_F,LOW);
  digitalWrite(Motor_Left_2_F,LOW);
  digitalWrite(Motor_Left_3_F,LOW);
  digitalWrite(Motor_Right_1_F,HIGH);
  digitalWrite(Motor_Right_2_F,HIGH);
  digitalWrite(Motor_Right_3_F,HIGH);
  digitalWrite(Motor_Left_1_B,HIGH);
  digitalWrite(Motor_Left_2_B,HIGH);
  digitalWrite(Motor_Left_3_B,HIGH);
  digitalWrite(Motor_Right_1_B,LOW);
  digitalWrite(Motor_Right_2_B,LOW);
  digitalWrite(Motor_Right_3_B,LOW);
}
void right()
{
    digitalWrite(Motor_Left_1_F,HIGH);
  digitalWrite(Motor_Left_2_F,HIGH);
  digitalWrite(Motor_Left_3_F,HIGH);
  digitalWrite(Motor_Right_1_F,LOW);
  digitalWrite(Motor_Right_2_F,LOW);
  digitalWrite(Motor_Right_3_F,LOW);
  digitalWrite(Motor_Left_1_B,LOW);
  digitalWrite(Motor_Left_2_B,LOW);
  digitalWrite(Motor_Left_3_B,LOW);
  digitalWrite(Motor_Right_1_B,HIGH);
  digitalWrite(Motor_Right_2_B,HIGH);
  digitalWrite(Motor_Right_3_B,HIGH);
}
void Stop()
{
  digitalWrite(Motor_Left_1_F,LOW);
  digitalWrite(Motor_Left_2_F,LOW);
  digitalWrite(Motor_Left_3_F,LOW);
  digitalWrite(Motor_Right_1_F,LOW);
  digitalWrite(Motor_Right_2_F,LOW);
  digitalWrite(Motor_Right_3_F,LOW);
  digitalWrite(Motor_Left_1_B,LOW);
  digitalWrite(Motor_Left_2_B,LOW);
  digitalWrite(Motor_Left_3_B,LOW);
  digitalWrite(Motor_Right_1_B,LOW);
  digitalWrite(Motor_Right_2_B,LOW);
  digitalWrite(Motor_Right_3_B,LOW);
}
void middleup()
{
  digitalWrite(J_Motor_1F,HIGH);
  digitalWrite(J_Motor_1B,LOW);
  digitalWrite(J_Motor_2F,LOW);
  digitalWrite(J_Motor_2B,LOW);
}
void middledown()
{
  digitalWrite(J_Motor_1F,LOW);
  digitalWrite(J_Motor_1B,HIGH);
  digitalWrite(J_Motor_2F,LOW);
  digitalWrite(J_Motor_2B,LOW);
}
void rearup()
{
  digitalWrite(J_Motor_1F,LOW);
  digitalWrite(J_Motor_1B,LOW);
  digitalWrite(J_Motor_2F,HIGH);
  digitalWrite(J_Motor_2B,LOW);
}
void reardown()
{
  digitalWrite(J_Motor_1F,LOW);
  digitalWrite(J_Motor_1B,LOW);
  digitalWrite(J_Motor_2F,LOW);
  digitalWrite(J_Motor_2B,HIGH); 
}
void extendA() 
{
digitalWrite(relay1, HIGH);
digitalWrite(relay2, LOW);
}
void retractA() 
{
digitalWrite(relay1, LOW);
digitalWrite(relay2, HIGH);
}
void stopA() 
{
digitalWrite(relay1, LOW);
digitalWrite(relay2, LOW);
}
void Autobot()
{
  left_sensor_state = analogRead(left_sensor_pin);
  right_sensor_state = analogRead(right_sensor_pin);
  if(right_sensor_state > 500 && left_sensor_state < 500)
  right();
  else
  if(right_sensor_state < 500 && left_sensor_state > 500)
  left();
  else
  if(right_sensor_state > 500 && left_sensor_state > 500)
  forward();
  else
  if(right_sensor_state < 500 && left_sensor_state < 500)
  stopA();
}
