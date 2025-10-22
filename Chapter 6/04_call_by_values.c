//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int sum(int, int);
int sum(int a, int b) {
    return a + b;
}
int main() {
    printf("The sum of 1 and 6 is %d\n", sum(1, 6));
    return 0;
}