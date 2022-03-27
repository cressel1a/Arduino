// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int lamba = analogRead(A0);
  if(lamba>20)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
  Serial.println(lamba);
  delay(150);
}
