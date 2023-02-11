int led[] = {10,11,12};
int i;
int tiempoPrendido;
int tiempoApagado;

void setup() {
  // put your setup code here, to run once:
  tiempoPrendido = 1000;
  tiempoApagado = 500;

  for (i=0; i<3; i++) {
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  actionLED(1);
    delay(tiempoPrendido);
  actionLED(0);
    delay(tiempoApagado);
}

void actionLED(int v) {
  for (i=0; i<3; i++) {
    digitalWrite(led[i], v);
  }
}
