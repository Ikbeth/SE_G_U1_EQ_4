//DigitalWrite prog3
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(led,HIGH); //Prender el led
  //digitalWrite(led,true); //Prender el led
  digitalWrite(led,1);
  
  delay(1000);

  //digitalWrite(led,LOW) //APaga el led
  //digitalWrite(led,false);
  digitalWrite(led,0);
  
  delay(1000);
}
