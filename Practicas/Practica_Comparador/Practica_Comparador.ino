int A = 2;
int B = 3;
int menor = 4;
int igual = 5;
int mayor = 6;
int pt1 = A0;
int pt2 = A1;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(igual, OUTPUT);
  pinMode(menor, OUTPUT);
  pinMode(mayor, OUTPUT);
  Serial.begin(9600);
}


int a;
int b;
void loop() {

  a = analogRead(pt1);
  b = analogRead(pt2);

  if (a > 512) {
    a = 1;
    digitalWrite(A, a);
  } else {
    a = 0;
    digitalWrite(A, a);
  }
  if (b > 512) {
    b = 1;
    digitalWrite(B, b);
  } else {
    b = 0;
    digitalWrite(B, b);
  }


  if (a == b) {
    digitalWrite(igual, 1);
    digitalWrite(mayor, 0);
    digitalWrite(menor, 0);
  } else if (a > b) {
    digitalWrite(mayor, 1);
    digitalWrite(igual, 0);
    digitalWrite(menor, 0);
  } else {
    digitalWrite(menor, 1);
    digitalWrite(igual, 0);
  }


  delay(500);
}