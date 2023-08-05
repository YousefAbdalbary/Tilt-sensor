int tilt = 8;
int motor = 9;
int reading ;
void setup()
{
pinMode(tilt, INPUT);
pinMode(motor, OUTPUT);

}

void loop()
{
  if(digitalRead(tilt)==0)
  {
    digitalWrite(motor,HIGH);}
  
  else 
  {
    digitalWrite(motor,LOW);
  }
}