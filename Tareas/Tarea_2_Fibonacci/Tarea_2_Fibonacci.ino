
int led1 = 2;
int led2 = 3;
int led3 = 4;  //analogico ->A0 - A5
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

int act = 1;
int ant = 0;
int sum = 1;
int temp;
void loop() {
  // put your main code here, to run repeatedly:
  int leds[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
  Serial.println(act);
  //Secuencia
  sum = ant + act;
  ant = act;
  temp = act;
  int x = 7;
  //Pasar a Binario
  for (int i = 0; i < 8; i++){
    if (temp > 0) {
      int aux = temp / 2;
      int res = temp % 2;
      leds[x] = res;
      temp = temp - (res + aux);
      x--;
    }
    else{
      i = 8;
    }
  }

  act = sum;
  if (act > 233) {
    act = 1;
    ant = 0;
    sum = 1;

  }
  digitalWrite(led1, leds[0]);
  digitalWrite(led2, leds[1]);
  digitalWrite(led3, leds[2]);
  digitalWrite(led4, leds[3]);
  digitalWrite(led5, leds[4]);
  digitalWrite(led6, leds[5]);
  digitalWrite(led7, leds[6]);
  digitalWrite(led8, leds[7]);

  delay(1000);
}
