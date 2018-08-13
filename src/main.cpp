#include <Arduino.h>
#include "TaskStepper.h"
#include "EnvironmentChecker.h"

TaskStepper *taskStepper;
EnvironmentChecker *environmentChecker;

void setup() {
  Serial.begin(5900);
  pinMode(LED_BUILTIN, OUTPUT);
  taskStepper = new TaskStepper();
  environmentChecker = new EnvironmentChecker();
  taskStepper->addTask(0, new WaterPumpActivator());
}

void ledOn() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void ledOff() {
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  ledOn();
  delay(1000);
  Environment environment = environmentChecker->getGroundEnvironment();
  taskStepper->makeStep(environment);
  ledOff();
  delay(1000);
}
