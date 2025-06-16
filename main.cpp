#include <Arduino.h>

int pinoSensor=A0;
float valorLido=0, temper=0;

void setup(){
	Serial.begin(9600);
    pinMode(A0,INPUT);
}

void loop(){
	valorLido=analogRead(pinoSensor);
    temper=valorLido*0.48875855;
	Serial.print(millis()/1000);
	Serial.print(",");
	Serial.println(temper);
	delay(2000);
}
