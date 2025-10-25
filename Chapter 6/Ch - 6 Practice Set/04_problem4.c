//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int multiplication(int *, int *);

// Multiplication should change the value of X
int multiplication(int* e, int* f) {
    *e = 9;
    return *e * *f;
}
int main() {
    int x = 6, y = 24;
    printf("The multiplication of x and y is %d\n", multiplication(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}