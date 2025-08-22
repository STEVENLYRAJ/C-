//
// Created by steve on 22-08-2025.
//

#include <stdio.h>

int main() {
    int a = 5326783;
    int b = 52454657;
    // Addition
    int c = a + b;
    // Substraction
    int d = a - b;
    // Multiplication
    int e = a * b;
    // Division
    int f = b / a;
    int g = a / b;
    // Modulus Operator is used to get the remainder
    int h = b % a;
    int i = a % b;
    printf("The value of a is %d, b is %d, sum is %d, difference is %d, product is %d, quotient is %d, reverse quotient is %d\n", a, b, c, d, e, f, g);
    printf("The remainder when b is divided by a is: %d and when a is divided by b is: %d", h, i);
    return 0;
}