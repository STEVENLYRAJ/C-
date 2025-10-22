//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int main() {
    int i = 10;
    int j = 20;
    int* k = &i;
    int* jp = &j;

    printf("Address of i is %p\n", i);
    printf("Address of j is %p\n", j);

    printf("Value of address i is %d\n", k);
    printf("Value of address j is %d\n", *(&jp));

}