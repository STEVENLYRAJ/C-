//
// Created by steve on 19-10-2025.
//
#include  <stdio.h>
#include <math.h> // for pow() function

int main() {
    double a, area;

    printf("Enter the side of the square: ");
    scanf("%lf", &a);

    // Calculate area using library Function pow()
    area = pow(a, 2);

    printf("Area of the square = %.2lf\n", area);

    return 0;
}