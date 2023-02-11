Xint inA = A0;
int inB = A1;
int led = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

int valorA, valorB;
void loop() {
  // put your main code here, to run repeatedly:
  valorA = analogRead(inA);
  valorB = analogRead(inB);

  valorA = valorA / 511;
  valorB = valorB / 511;

  Serial.println("Valor A: " + String(valorA));
  Serial.println("Valor B: " + String(valorB));
  delay(250);

  if ((valorA + valorB) == 1) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
