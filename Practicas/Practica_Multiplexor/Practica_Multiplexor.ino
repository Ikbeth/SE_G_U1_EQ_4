int led1 = 2;
int pt1 = A0;

void setup() {
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}


int val1;
void loop() {

  val1 = analogRead(pt1);
  val1 = map(val1, 0, 1023, 0, 8);

  Serial.println(val1);
  if (val1 == 2) {
    digitalWrite(led1, HIGH);
  }
  else if (val1 > 2 and (val1%2) == 1 and val1 < 9) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  delay(10);
}