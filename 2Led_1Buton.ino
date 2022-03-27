// C++ code

int button1;
int led1;
int led2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
}

void loop()
{
  button1 = digitalRead(11);
  led1 = digitalRead(13);
  led2 = digitalRead(12);

  if (button1 == 1){
    if (led1 == 0){
    digitalWrite(13, HIGH);
    }
    else if (led2 == 0){
    digitalWrite(12, HIGH);
    }
    delay(200);
    }
}
