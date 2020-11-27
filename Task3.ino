int tmp = A5;
int greenLed = 7;
int redLed = 2;
int button = 12;
int buttonValue;
int tmpValue;
void setup() {
  pinMode(tmp, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonValue = digitalRead(button);
  if(buttonValue == HIGH)
  {
    tmpValue = analogRead(tmp);
    if(tmpValue <= 155)
    {
      digitalWrite(greenLed, HIGH);
      digitalWrite(redLed, LOW);
    }
    else
    {
      digitalWrite(greenLed, LOW);
      digitalWrite(redLed, HIGH);
    }
    Serial.print("Temperature: ");
    Serial.print(tmpValue);
    Serial.print("\n");
  }
  else
  {
      digitalWrite(greenLed, LOW);
      digitalWrite(redLed, LOW);
  }
}
