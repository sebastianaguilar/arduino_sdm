#include <Servo.h>

Servo servo_1;

int potenciometro_1 = 3;
int valor_potenciometro_1;

void setup() {
  // put your setup code here, to run once:
  servo_1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_potenciometro_1 = analogRead(potenciometro_1);

  //Serial.println(sensorValue);
  
  valor_potenciometro_1 = map(valor_potenciometro_1, 0, 1023, 0, 180);
  servo_1.write(valor_potenciometro_1);
  delay(10);
}
