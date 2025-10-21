//
// Created by steve on 18-09-2025.
//
// Calculate the factorial of a given number using while loop
#include <stdio.h>

int main() {
    int i = 1;
    int product = 1;
    int n = 5;
    while (i <= n){
        product *= i;
        i++;
    }

    printf("The product is: %d\n", product);
}