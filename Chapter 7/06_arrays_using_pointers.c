//
// Created by steve on 25-10-2025.
//
#include <stdio.h>

int main() {
    int marks[] = {77, 85, 58, 99, 69, 34, 92};

    // int *p1 = &marks[0];
    int *p1 = marks; // Same as int *p1 = &marks[0]

    for (int i = 0; i < 6; i++) {
        // printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *p1);
        p1++;
        printf("The marks at index %d is %d\n", i, *p1);
    }
    return 0;
}