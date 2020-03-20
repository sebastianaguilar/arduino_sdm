

    int pinLedR = 10; // pin Rojo del LED RGB
    int pinLedG = 11; // pin Verde del LED RGB
    int pinLedB = 13; // pin Azul del LED RGB
    int pausa = 1000;
    void setup()
    {
        pinMode(pinLedR, OUTPUT); // pone el pinLedR como output
        pinMode(pinLedG, OUTPUT); // pone el pinLedV como output
        pinMode(pinLedB, OUTPUT); // pone el pinLedA como output
    }
    void loop()
    {
        //Colores básicos
        color(0, 255, 255); // Rojo
        delay(1000);
        color(255, 0, 255); // Verde
        delay(1000);
        color(255, 255, 0); // Azul
        delay(1000);


        
        //Colores mezclados
        //color(0, 0, 0); // Blanco
        //delay(1000);
        color(255, 50, 50); // Amarillo
        delay(1000);
        color(0, 255, 0); // Magental
        delay(1000);
        color(255, 0, 0); // Cian
        delay(1000);
        color(255, 255, 255); // Apagado
        delay(1000);
        
        /*
        //Colores básicos
        color(255, 0, 0); // Rojo
        delay(1000);
        color(255, 0, 0); // Rojo
        delay(1000);
        //color(0, 255, 0); // Verde
        delay(1000);
        //color(0, 0, 255); // Azul
        delay(1000);


        
        //Colores mezclados
        color(255, 255, 255); // Blanco
        delay(1000);
        color(255, 255, 0); // Amarillo
        delay(1000);
        color(255, 0, 255); // Magental
        delay(1000);
        color(0, 255, 255); // Cian
        delay(1000);
        color(0, 0, 0); // Apagado
        delay(1000);
        */
    }

    // funcion para generar colores
    void color(int rojo, int verde, int azul)
    {
        
      /*ç
       * ROJO
       * analogWrite(pinLedR, 0);
        analogWrite(pinLedV, 255);
        analogWrite(pinLedA, 255);
       * 
     
        */
        analogWrite(pinLedR, rojo);
        analogWrite(pinLedG, verde);
        analogWrite(pinLedB, azul);
    }
