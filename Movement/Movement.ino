
#define Motor_Left_1_F                      
#define Motor_Left_1_B            //Motor Driver 1
#define Motor_Right_1_F  
#define Motor_Right_1_B 

#define Motor_Left_2_F 
#define Motor_Left_2_B           //Motor Driver 2
#define Motor_Right_2_F  
#define Motor_Right_2_B 

#define Motor_Left_3_F  
#define Motor_Left_3_B          //Motor Driver 3
#define Motor_Right_3_F 
#define Motor_Right_3_B 

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
void right(0
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
