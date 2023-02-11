int potenciometro = A0; //analogico ->A0 - A5
void setup() {
  // put your setup code here, to run once:

  //los pines analogicos, solo funcionan como entradas, por lo que no se requiere se defina el modo de trabajo

  //ADC = //5volts de voltaje de preferenca //10bits de resolucion --> 1024 valores = {0, 1023}
  //0 = 0volts
  //1023 = 5volts

  Serial.begin(9600);

}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(potenciometro);

  valor = map(valor, 0, 1023, 0, 4);

  Serial.println("Valor mapeado: " + String(valor));
  delay(250);

}
