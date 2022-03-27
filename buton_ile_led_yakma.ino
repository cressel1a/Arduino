// C++ code

#define Buton 12
#define Led 13
void setup()
{
  pinMode(Led, OUTPUT);
  pinMode(Buton, INPUT);
}

void loop()
{
  
  if(digitalRead(Buton)==1){
    digitalWrite(Led,HIGH);
    delay(2000);
  }
  else
    digitalWrite(Led,LOW);
}
