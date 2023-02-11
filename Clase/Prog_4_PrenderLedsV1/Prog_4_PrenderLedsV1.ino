int led[] = {10,11,12};
int i;

void setup() {
  // put your setup code here, to run once:

  for (i=0; i<3; i++) {
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for (i=0; i<3; i++) {
    digitalWrite(led[i], 1);
  }
  delay(1000);

  for (i=0; i<3; i++) {
    digitalWrite(led[i], 0);
  }
  delay(1000);

}
