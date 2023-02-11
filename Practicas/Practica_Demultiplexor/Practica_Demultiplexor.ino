int Y0 = 6, Y1 = 5, Y2 = 4, Y3 = 3;
int pt1 = A0;

void setup() {
  pinMode(Y0, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(Y3, OUTPUT);
  Serial.begin(9600);
}


int val1;
void loop() {

  val1 = analogRead(pt1);
  val1 = map(val1, 0, 1023, 0, 3);

  Serial.println(val1);

  if (val1 == 1) {
    
    digitalWrite(Y0, LOW);
    digitalWrite(Y1, HIGH);
    digitalWrite(Y2, LOW);
    digitalWrite(Y3, LOW);
    
  } else if (val1 == 2) {
    
    digitalWrite(Y0, LOW);
    digitalWrite(Y1, LOW);
    digitalWrite(Y2, HIGH);
    digitalWrite(Y3, LOW);
    
  } else if (val1 == 3) {
    
    digitalWrite(Y0, LOW);
    digitalWrite(Y1, LOW);
    digitalWrite(Y2, LOW);
    digitalWrite(Y3, HIGH);
    
  } else if (val1 == 0){
    digitalWrite(Y0, HIGH);
    digitalWrite(Y1, LOW);
    digitalWrite(Y2, LOW);
    digitalWrite(Y3, LOW);
  }

  delay(500);
}