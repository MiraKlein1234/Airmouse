
#include "mbed.h"
#include "USBMouse.h"
#include "FXOS8700Q.h"

USBMouse mouse;

FXOS8700Q_acc acc( PTE25, PTE24, FXOS8700CQ_SLAVE_ADDR1); // Proper Ports and I2C Address for K64F Freedom board
FXOS8700Q_mag mag( PTE25, PTE24, FXOS8700CQ_SLAVE_ADDR1); // Proper Ports and I2C Address for K64F Freedom board

Serial pc(USBTX, USBRX);

MotionSensorDataUnits mag_data;
MotionSensorDataUnits acc_data;

MotionSensorDataCounts mag_raw;
MotionSensorDataCounts acc_raw;

int main() {
    
    acc.enable();
    
    int16_t x = 0;
    int16_t y = 0;
    
    float accX;
    float accY;
    
    float Xkoef = 10;
    float Ykoef = 10;

    while (1) {
        
        acc.getAxis(acc_data);
        
        accY = acc_data.x;
        accY *= Ykoef;
        y =  (int16_t) accY;
        
        
        accX = acc_data.y;
        accX *= Xkoef;
        x = - (int16_t) accX;
        
        
        mouse.move(x, y);
        wait(0.001);
        
        
    }
}