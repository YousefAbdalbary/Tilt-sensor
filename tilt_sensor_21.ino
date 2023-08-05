#define speedL 5
#define IN1 6
#define IN2 7
int tilt = 2;
int reading ;
void setup()
{
Serial.begin(9600);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT); 
pinMode(speedL, OUTPUT);
pinMode(tilt, INPUT);
}

void loop()
{
  reading =digitalRead(tilt);
    
if (reading ==0)
  {
  	digitalWrite (IN1, HIGH);
  	digitalWrite (IN2, 0);
    digitalWrite (speedL,1);
  }
  
  if (reading==0)
   {
  	digitalWrite (IN1, LOW);
  	digitalWrite (IN1, LOW);
    digitalWrite (speedL,0);
  } 
  
}