//PWM = MODULCIO POR ANCHO DE PULSO
//ANALOGIA: COCNSISTE EN SIMULAR UNA SÑAL ANALOGICA A TRAVES DE LA MODIFICACION DEL TIEMPO DE TRABAJO
// (ALTO) DE UNA SEÑAL DIGITAL

//PWM = 1 BYTE -> 0 AL 255
//DONDE   0 = 0VOLTS
//      255 = 5VOLTS

//NO TODOS LOS PINES DIGTALES SON PWM, SOLO LOS QUE ASI LO INDICAN
// ARDUINO UNO -> SON LOS QUE CUENTAN CON UNA VIRGULILLA A UN LADO ~

int led = 6; //compatible con PWM

void setup() {
  // put your setup code here, to run once:
  //a los pines pwm no se les establece modo de trabajo

}

int i;
void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 255; i++){
    analogWrite(led, i);
    delay(10);
  }
  for(i = 255; i>0; i--){
    analogWrite(led, i);
    delay(10);    
  }
}
