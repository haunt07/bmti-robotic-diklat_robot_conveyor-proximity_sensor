#ifndef PROXIMITY_SENSOR_H
#define PROXIMITY_SENSOR_H
#include <Arduino.h>

class ProximitySensor{
    private:
    uint8_t pinProximity;

    public:
    void begin(uint8_t pinProximity);
    bool read();
};

#endif