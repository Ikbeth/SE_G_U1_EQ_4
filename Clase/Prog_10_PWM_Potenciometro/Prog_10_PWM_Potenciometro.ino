//PWM = MODULCIO POR ANCHO DE PULSO
//ANALOGIA: COCNSISTE EN SIMULAR UNA SÑAL ANALOGICA A TRAVES DE LA MODIFICACION DEL TIEMPO DE TRABAJO
// (ALTO) DE UNA SEÑAL DIGITAL

//PWM = 1 BYTE -> 0 AL 255
//DONDE   0 = 0VOLTS
//      255 = 5VOLTS

//NO TODOS LOS PINES DIGTALES SON PWM, SOLO LOS QUE ASI LO INDICAN
// ARDUINO UNO -> SON LOS QUE CUENTAN CON UNA VIRGULILLA A UN LADO ~

int led = 6; //compatible con PWM
int pot = A0;

void setup() {
  // put your setup code here, to run once:
  //a los pines pwm no se les establece modo de trabajo
  Serial.begin(9600);
}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(pot); //0-1023

  //opcion1. map
  //opcion2. logica

  valor = valor/4;

  analogWrite(led,valor);

}
