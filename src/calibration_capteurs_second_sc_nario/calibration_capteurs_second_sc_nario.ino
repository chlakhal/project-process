#include <MQ135.h>

#include <Arduino.h>

const int AIR SENSOR_PIN_1  = A0;

MQ135 gasSensorl (AIR_SENSOR_PIN_1);


void setup() {
Serial.begin(9600);

delay(10000); // Attendre 10 secondes pour que le capteur chauffe
}
void loop() {

float R0_ 1 = gassensor.getRZero();

Serial.print ("RO capteur 1 =");
Serial.print (R0_1);
Serial.println(" ohms");

delay (1000);


}
