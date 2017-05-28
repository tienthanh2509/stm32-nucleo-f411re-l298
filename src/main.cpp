#include "mbed.h"
#include "Motor.h"

Motor left(D10, D4, D5); // ENA, IN1, IN2
Motor right(D11, D7, D6); // ENA, IN1, IN2

int main() {
    for (float s = -1.0; s < 1.0 ; s += 0.01) {
       left.speed(s);
       right.speed(s);

       printf("PWD is %.2f\n", s);

       wait(0.2);
    }
}
