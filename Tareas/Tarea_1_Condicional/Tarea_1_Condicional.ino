byte variable;

void setup() {
  variable = 0;
  Serial.begin(9600);
}

void loop() {

  Serial.println(variable++);
  if (variable >= 255) {
    for (int i = 0; variable > i; variable--) {
      Serial.println(variable);
      delay(150);
      if(variable==255){
        Serial.println("Hasta aqui llega");
        Serial.println(variable);
      }
    }
    
      if(variable==0){
        Serial.println(variable);
        Serial.println("Hasta aqui llega");
      }

  }
  delay(150);
}
