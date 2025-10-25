//
// Created by steve on 25-10-2025.
//
#include <stdio.h>

int main() {
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 69;
    int *pa = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", pa);
    pa++;
    printf("The value of pa is %u\n", pa);
    printf("The value of a is %d\n", a);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    // char JoeKerry = 'Steve Harrington';
    // char *ptr = &JoeKerry;
    // printf("The address of JoeKerry is %u\n", &JoeKerry);
    // printf("The address of ptr is %u\n", ptr);
    // ptr++;
    // printf("The address of ptr is %u\n", ptr);

    // POINTER ARITHMETIC USING FLOAT POINTER
    // float a = 6.9;
    // float *pa = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", pa);
    // pa++;
    // printf("The value of pa is %u\n", pa);
    // printf("The value of a is %f\n", a);
    return 0;
}