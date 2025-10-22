//
// Created by steve on 21-10-2025.
//
#include <stdio.h>

float force(float);

float force(float mass) {
    return mass * 9.8;
}

int main() {
     int m = 75;
    printf("The valu8e of force is %f\n", force(m));
    return 0;
}