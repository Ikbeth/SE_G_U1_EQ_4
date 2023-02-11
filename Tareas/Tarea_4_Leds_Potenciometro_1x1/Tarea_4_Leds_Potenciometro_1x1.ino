int potenciometro = A0;
int led1 = 2;
int led2 = 3;
int led3 = 4;  //analogico ->A0 - A5
int led4 = 5;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(potenciometro);

  Serial.println(valor);

  if (valor > 24) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    if (valor > 275) {
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      if (valor > 525) {
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        if (valor > 775) {
          digitalWrite(led4, HIGH);
        }
      }
    }
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }

  delay(250);
}
