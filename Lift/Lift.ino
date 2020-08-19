#define J_Motor_1F 23
#define J_Motor_1B 25
#define J_Motor_2F 27  
#define J_Motor_2B 29        

void setup() 
{
  Serial.begin(9600);
  pinMode(J_Motor_1F,OUTPUT);
  pinMode(J_Motor_1B,OUTPUT);
  pinMode(J_Motor_2F,OUTPUT);
  pinMode(J_Motor_2B,OUTPUT);
}

void loop()
{
  while(Serial.available())
  {
    char input=Serial.read();
    {
      if(input=='v')
      {
        digitalWrite(J_Motor_1F,HIGH);
        digitalWrite(J_Motor_1B,LOW);
        digitalWrite(J_Motor_2F,LOW);
        digitalWrite(J_Motor_2B,LOW);
      }
      else
      if(input=='b')
      {
        digitalWrite(J_Motor_1F,LOW);
        digitalWrite(J_Motor_1B,HIGH);
        digitalWrite(J_Motor_2F,LOW);
        digitalWrite(J_Motor_2B,LOW);
      }
      else
      if(input=='n')
      {
        digitalWrite(J_Motor_1F,LOW);
        digitalWrite(J_Motor_1B,LOW);
        digitalWrite(J_Motor_2F,HIGH);
        digitalWrite(J_Motor_2B,LOW);
      }
      else
      if(input=='m')
      {
        digitalWrite(J_Motor_1F,LOW);
        digitalWrite(J_Motor_1B,LOW);
        digitalWrite(J_Motor_2F,LOW);
        digitalWrite(J_Motor_2B,HIGH);
      }
    }
  }

}
