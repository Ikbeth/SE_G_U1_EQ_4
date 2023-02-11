int led=3;
int pot1=A0,pot2=A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int valor2,valor1,V;
String serial;
void loop() {

  valor1=analogRead(pot1);

  if(valor1<512){
    Serial.println("LED CONTROLADO POR POTENCIOMETRO");
    valor2=analogRead(pot2);
    valor2=valor2/4;

    analogWrite(led,valor2);
  }
  else{ 
     Serial.println("LED CONTROLADO POR SERIAL CONTROL");
     if (Serial.available() > 0) {
     serial = Serial.readString();
     V=serial.toInt();
     analogWrite(led,V);
    }
  }
  delay(500);
}
