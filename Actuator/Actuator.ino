#define relay1 6 
#define relay2 7 

void setup() 
{
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

}
void loop() 
{
  while(Serial.available())
  {
    char input=Serial.read();
    if(input=='t')
    extendA();
    else
    if(input=='y')
    retractA();
    else
    if(input=='u')
    stopA();
  }
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
