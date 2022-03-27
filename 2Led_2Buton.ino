// C++ code

int button1;
int led1;
int button2;
int led2;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
}

void loop()
{
  button1 = digitalRead(10);
  led1 = digitalRead(13);

  if (button1 == 1){
    if (led1 == 0){
    digitalWrite(13, HIGH);
    }
    else if (led1 == 1){
    digitalWrite(13, LOW);
    }
    
    }
  
  button2 = digitalRead(11);
  led2 = digitalRead(12);
  
  if (button2 == 1){
    if (led2 == 0){
    digitalWrite(12, HIGH);
    }
    else if (led2 == 1){
    digitalWrite(12, LOW);
    }
    
    }
}
