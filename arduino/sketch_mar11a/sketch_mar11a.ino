#include <Servo.h>
// Práctica encender y apagar un LED
const int LED=3;
Servo myservo;
//int pos = 0;
int pos;
void setup()
{
pinMode(LED,OUTPUT);
myservo.attach(9);
}
void loop()
{
digitalWrite(LED,HIGH);
delay(1000);
digitalWrite(LED,LOW);
delay(1000);
if(pos){
  //pos = 0;
}
  //int pos_final = pos + 180;
  int pos_final = pos + 20;
  
  //for(pos = 0; pos <= 180; pos += 1){
  if(pos_final < 180){
  //if(pos_final < 270){
    for(pos = pos; pos <= pos_final; pos += 1){
      myservo.write(pos);
      delay(15);
    }
  }else{
    pos = 0;
  }
  

}
