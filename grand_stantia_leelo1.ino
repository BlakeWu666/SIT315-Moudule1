// C++ code
//
int temp = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  temp = map((analogRead(A0) - 20 * 3.04), 0, 1023, -10, 30);
  Serial.println(temp);
  if (temp < 0) {
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }

  if (temp >= 0 && temp < 20) {
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }

  1 < 1;

  if (temp >= 20) {
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}