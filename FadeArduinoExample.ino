#define LEDYELLOW 9
#define LEDGREEN 11
#define LEDRED 10
#define LEDT 6
#define LEDR 5
#define LEDE 3
#define POT A0
#define BUTTON 2

int parameter;
void setup() 
{
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDGREEN, OUTPUT);
  pinMode(LEDT, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDE, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() 
{
  parameter = map(analogRead(POT), 0, 1023, 0, 255);
  if(digitalRead(BUTTON) == HIGH)
  {
    analogWrite(LEDYELLOW, parameter);
    analogWrite(LEDRED, parameter);
    analogWrite(LEDGREEN, parameter);
    analogWrite(LEDT, parameter);
    analogWrite(LEDR, parameter);
    analogWrite(LEDE, parameter);
  }
  else
  { 
    analogWrite(LEDYELLOW, 0);
    analogWrite(LEDRED, 0);
    analogWrite(LEDGREEN, 0);
    analogWrite(LEDT, 0);
    analogWrite(LEDR, 0);
    analogWrite(LEDE, 0);
  }
}
