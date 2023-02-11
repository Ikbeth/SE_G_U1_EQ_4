int inA = A2;
int inB = A1;
int inC = A0;
int ledA = 2;
int ledB = 3;
int ledC = 4;
int ledS = 12;
int ledCout = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledS, OUTPUT);
  pinMode(ledCout, OUTPUT);
  Serial.begin(9600);
}

int A, B, C, S, Cout;

void loop() {
  // put your main code here, to run repeatedly:
  //ENTRADAS..
  A = analogRead(inA);
  A = A / 512;
  if (A == 0) {
    actionLED(ledA, 0);
  } else {
    actionLED(ledA, 1);
  }
  Serial.println("Valor A: " + String(A));

  B = analogRead(inB);
  B = B / 512;
  if (B == 0) {
    actionLED(ledB, 0);
  } else {
    actionLED(ledB, 1);
  }
  Serial.println("Valor B: " + String(B));

  C = analogRead(inC);
  C = C / 512;
  if (C == 0) {
    actionLED(ledC, 0);
  } else {
    actionLED(ledC, 1);
  }
  Serial.println("Valor C: " + String(C));

  //SUMADOR
  if ((A + B) == 1) {
    S = 1;
  } else {
    S = 0;
  }
  if ((S + C) == 1) {
    S = 1;
  } else {
    S = 0;
  }

  actionLED(ledS, S);

  Cout = A + B;
  if (Cout == 2) {
    actionLED(ledCout, 1);
  } else {
    Cout += C;
    if (Cout == 2) {
      actionLED(ledCout, 1);
    }
  }
  if (Cout != 2) {
    actionLED(ledCout, 0);
  }
  delay(250);
}

void actionLED(int led, int valor) {
  digitalWrite(led, valor);
}
