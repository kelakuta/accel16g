#include "MicroBit.h"

extern MicroBit uBit;

namespace accel16g {

    //% block="enable accelerometer 16g mode"
    void enable16g() {

        const int ACC_ADDR = 0x32;
        const uint8_t CTRL_REG4_A = 0x23;

        uint8_t data[2];
        data[0] = CTRL_REG4_A;
        data[1] = 0x30;

        uBit.i2c.write(ACC_ADDR, (char*)data, 2);
    }

}
