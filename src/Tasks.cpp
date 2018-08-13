#include <HardwareSerial.h>
#include "Tasks.h"

Task::Task() = default;
Task::~Task() = default;

void WaterPumpActivator::perform() {
  Serial.println("Water pump triggered!!");
}

WaterPumpActivator::WaterPumpActivator() = default;
