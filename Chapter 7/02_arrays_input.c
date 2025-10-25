//
// Created by steve on 25-10-2025.
//
#include <stdio.h>

int main() {
    int marks[8];

    printf("Enter marks of 8 students: \n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    // scanf("%d", &marks[5]);
    // scanf("%d", &marks[6]);
    // scanf("%d", &marks[7]);
    for (int i = 0; i < 8; i++) {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 8; i++) {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    return 0;
}