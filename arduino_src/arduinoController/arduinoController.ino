const int analogVerticalPin = A0;
const int analogHorizontalPin = A1;
const int clutchPin = A2;

int analogVerticalValue;
int analogHorizontalValue;
int clutchValue;

void setup(){
  Serial.begin(9600);
}

void loop(){
  analogVerticalValue = analogRead(analogVerticalPin);
  analogHorizontalValue = analogRead(analogHorizontalPin);
  clutchValue = analogRead(clutchPin);
  Serial.print("V");
  Serial.println(analogVerticalValue);
  Serial.print("H");
  Serial.println(analogHorizontalValue);
  Serial.print("C");
  Serial.println(clutchValue);
}
