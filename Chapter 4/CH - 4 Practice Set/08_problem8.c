//
// Created by steve on 18-09-2025.
//
// Calculate the factorial of a given number using a for loop
#include <stdio.h>

int main() {
    int product = 1;
    int n = 5;
    for (int i = 1; i <= n; i++) {
        product *=i;
    }

    printf("The product is: %d\n", product);
}

