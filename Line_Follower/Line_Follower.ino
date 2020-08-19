#define left_sensor_pin A0
#define right_sensor_pin A1
 
int left_sensor_state;
int right_sensor_state;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
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
stop();
}










 
