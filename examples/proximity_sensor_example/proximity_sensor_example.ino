#include <proximity_sensor.h>

ProximitySensor proxySens;
void setup(){
    Serial.begin(115200);
    proxySens.begin(10);
    Serial.println("Inisialisasi sistem");
}

void loop(){
    if(proxySens.read()){
        Serial.println("ada objek");
    }else{
        Serial.println("tidak ada objek");
    }
    delay(100);
}