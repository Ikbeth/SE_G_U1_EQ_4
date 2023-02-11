int C = 2;
int S = 3;
int pt1 = A0;
int pt2 = A1;

void setup() {
  pinMode(C, OUTPUT);
  pinMode(S, OUTPUT);
  Serial.begin(9600);
}

int A;
int B;
int a;
int b;
void loop() {

  A = analogRead(pt1);
  B = analogRead(pt2);
  
  if(A > 512){
    a = 1;
  } else {
    a = 0;
  }
  if(B > 512){
    b = 1;
  } else {
    b = 0;
  }

  Serial.println(a);
  Serial.println(b);

  if(a != b){
    Serial.println("encendido");
    digitalWrite(S, HIGH);
  } else {
    Serial.println("apagado");
    digitalWrite(S, LOW);
  }

  if((a+b) == 2){
    Serial.println("encendido");
    digitalWrite(C, HIGH);
  } else {
    Serial.println("apagado");
    digitalWrite(C, LOW);
  }

  delay(500);
}