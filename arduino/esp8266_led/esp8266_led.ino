int salida = 5; 
 
void setup() { 
// inicializar GPIO 2 como salida 
pinMode(salida, OUTPUT); 
} 
 
// la función loop corre continuamente 
void loop() { 
// enciende el LED (HIGH es ALTO y es el nivel de voltaje)
digitalWrite(salida, HIGH);
delay(1000); // espera 1000 milisegundos = un segundo 
digitalWrite(salida, LOW); 
// apaga el LED (LOW es BAJO y es el nivel de voltaje)
delay(1000); // espera 1000 milisegundos = un segundo
}
