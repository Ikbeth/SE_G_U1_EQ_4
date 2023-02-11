int led1 = 7, led2 = 6, led3 = 5, led4 = 4;
int pt1 = A0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}


int val1;
void loop() {

  val1 = analogRead(pt1);
  val1 = map(val1, 0, 1023, 0, 9);

  Serial.println("entrada = " + String(val1));
  int leds[] = { 0, 0, 0, 0 };
  int x = 3;

  for (int i = 0; i < 4; i++) {
    if (val1 > 0) {
      int aux = val1 / 2;
      int res = val1 % 2;
      leds[x] = res;
      val1 = val1 - (res + aux);
      x--;
    } else {
      i = 8;
    }
  }
    digitalWrite(led1, leds[0]);
    digitalWrite(led2, leds[1]);
    digitalWrite(led3, leds[2]);
    digitalWrite(led4, leds[3]);
    delay(100);
  }