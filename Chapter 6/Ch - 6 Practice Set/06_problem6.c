//
// Created by steve on 24-10-2025.
//
#include <stdio.h>

int main() {
    int i = 6;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;

    printf("The address of i is %u\n", &i);
    printf("The value if i is %d\n", *ptr1);
    printf("The value of ptr1 is %p\n", **ptr2);

    return 0;
}