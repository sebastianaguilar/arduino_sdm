#include <Servo.h>

Servo servo_1;
const int LED=3;

int pos;

int potenciometro_1 = 3;
int valor_potenciometro_1;
int valor_potenciometro_led_1;

void setup() {
  pinMode(LED,OUTPUT);

  // put your setup code here, to run once:
  servo_1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_potenciometro_1 = analogRead(potenciometro_1);

  //Serial.println(sensorValue);
  Serial.println(valor_potenciometro_1);
  
  valor_potenciometro_1 = map(valor_potenciometro_1, 0, 1023, 0, 180);

  valor_potenciometro_led_1 = map(valor_potenciometro_1, 0, 1023, 0, 1000);
  
  
  Serial.println(valor_potenciometro_1);
  
  servo_1.write(valor_potenciometro_1);

  Serial.println(valor_potenciometro_1);

  
  Serial.println(valor_potenciometro_led_1);

  //digitalWrite(LED,HIGH);
  //digitalWrite(LED,valor_potenciometro_1);
  pos = valor_potenciometro_led_1;
  analogWrite(LED,pos);
  delay(5);
  //analogWrite(LED,pos-50);
  

/*
for  (int i=255;i>0; i--){
analogWrite(LED,i);
delay(5);
}
*/
  delay(10);
}
