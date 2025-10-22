//
// Created by steve on 21-10-2025.
//
#include <stdio.h>

float c2f(float c);

float c2f(float c) {

    return ((c * 9)/ 5) + 32;
}
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = c2f(celsius);

    printf("Temperature in fahrenheit = %.2f°F\n", fahrenheit);
    return 0;
}