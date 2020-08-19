
#define Motor_Left_1_F 1                      
#define Motor_Left_1_B 2           
#define Motor_Right_1_F 3 
#define Motor_Right_1_B 4
#define Motor_Left_2_F 5
#define Motor_Left_2_B 6          
#define Motor_Right_2_F 7 
#define Motor_Right_2_B 8
#define Motor_Left_3_F 9 
#define Motor_Left_3_B 10        
#define Motor_Right_3_F 11
#define Motor_Right_3_B 12 

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
}
void loop() 
{
  while(Serial.available())
  {
    char input=Serial.read();
    {
      if(input=='w')
      forward();
      else
      if(input=='s')
      backward();
      else
      if(input=='a')
      left();
      else
      if(input=='d')
      right();
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
