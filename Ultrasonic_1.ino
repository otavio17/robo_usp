#include <Ultrasonic.h>
const int pino_trigger = 3;
const int pino_echo = 5;

Ultrasonic ultrasonic_sensor(pino_trigger, pino_echo);

void setup() {
 Serial.begin(9600);
 Serial.println("Teste sensor ultrassom");
}

void loop() {
  float cmMsec, inMsec;
  long microsec = ultrasonic_sensor.timing();
  cmMsec = ultrasonic_sensor.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic_sensor.convert(microsec, Ultrasonic::IN);
  Serial.println("Distância em centímetro:");
  Serial.println(cmMsec);
  Serial.println("Distância em polegadas:");
  Serial.println(inMsec);
  delay(10000);
}
