#include "proximity_sensor.h"

void ProximitySensor::begin(uint8_t pinProximity){
    this->pinProximity=pinProximity;
    pinMode(this->pinProximity, INPUT);
}

bool ProximitySensor::read(){
    return !digitalRead(pinProximity);
}