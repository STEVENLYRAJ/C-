//
// Created by steve on 25-10-2025.
//
#include <stdio.h>

int main() {
    float cgpa[5] = {9.4, 8.7, 8.2, 7.7, 6.9};

    for (int i = 0; i < 5; i++) {
        printf("The value of CGPA at index %d is %.2f\n", i, cgpa[i]);
    }
    return 0;
}