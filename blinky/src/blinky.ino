/*
 * Project blinky
 * Description:
 * Author:
 * Date:
 */

#define LED         D7

int _delayTime = 500;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(LED, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  digitalWrite(LED, HIGH);
  delay(_delayTime);
  digitalWrite(LED, LOW);
  delay(_delayTime);
}