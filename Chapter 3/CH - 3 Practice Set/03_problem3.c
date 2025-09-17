//
// Created by steve on 06-09-2025.
//
#include  <stdio.h>

int main() {
    int income, tax=0;
    printf("Enter income: \n");
    scanf("%d", &income);

    if (income < 250000) {
        tax = 0;
    }

    else if (income>250000 && income < 500000) {
        tax = 0.05 * ( ncome - 250000;
    }
    else if (income>500000 && income <= 1000000) {
        tax = 0.05 * (500000 -250000);
    }

    return 0;
}