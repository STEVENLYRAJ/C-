//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int sum(int *, int *);

// Sum should change the value of X
int sum(int* i, int* j) {
    *i = 4;
    return *i + *j;
}
int main() {
    int x = 5, y = 6;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}