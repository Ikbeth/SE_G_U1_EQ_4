int inA = A0;
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

  if ((valorA + valorB) == 0 || (valorA + valorB) == 2) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
