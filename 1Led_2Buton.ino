// C++ code

#define Buton 11
#define Buton 12
#define Led 13

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
}

void loop()
{
  
  if(digitalRead(11)==1){
    digitalWrite(13,HIGH);
  }
  if(digitalRead(12)==1){
    digitalWrite(13,LOW);
  }
}
