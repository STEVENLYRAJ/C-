//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int main() {
    int i = 72;
    int* j = &i; // J is a pointer which pointing to i (j is an integer pointer)
    int k = 69;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);

    printf("The value at address j is %d\n", *j);
    return 0;
}