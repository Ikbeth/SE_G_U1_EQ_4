
byte variable;

void setup() {
  // put your setup code here, to run once:
  variable = 0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(variable++);
  if (variable < 255) {
    variable++;
  } else {
    Serial.print(".- Se llego al limite de variable");
  }
  Serial.println();
  delay(250);
}
