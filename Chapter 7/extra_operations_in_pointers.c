//
// Created by steve on 25-10-2025.
//
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = arr;       // points to first element
    int *p2 = arr + 2;   // points to third element

    printf("Initial pointer values:\n");
    printf("p1 points to value: %d, address: %p\n", *p1, (void*)p1);
    printf("p2 points to value: %d, address: %p\n\n", *p2, (void*)p2);

    // 1. Addition of a number to a pointer
    printf("Addition of a number to pointer:\n");
    p1 = p1 + 3;  // move 3 elements forward
    printf("After p1 + 3, p1 points to value: %d, address: %p\n\n", *p1, (void*)p1);

    // 2. Subtraction of a number from a pointer
    printf("Subtraction of a number from pointer:\n");
    p1 = p1 - 2;  // move 2 elements back
    printf("After p1 - 2, p1 points to value: %d, address: %p\n\n", *p1, (void*)p1);

    // 3. Subtraction of one pointer from another
    printf("Subtraction of one pointer from another:\n");
    int diff = p2 - p1;
    printf("Difference between p2 and p1 = %d elements\n\n", diff);

    // 4. Comparison of two pointers
    printf("Comparison of two pointers:\n");
    if (p1 < p2)
        printf("p1 is before p2 in memory\n");
    else if (p1 > p2)
        printf("p1 is after p2 in memory\n");
    else
        printf("p1 and p2 point to the same location\n");

    return 0;
}