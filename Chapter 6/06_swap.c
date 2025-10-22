//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

void swap(int *, int *);

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int a, b;
    printf("Enter 1st numbers: ");
    scanf("%d", &a);
    printf("Enter 2nd numbers: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}