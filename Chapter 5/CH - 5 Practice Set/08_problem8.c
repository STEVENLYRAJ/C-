//
// Created by steve on 22-10-2025.
//
// centered pyramid star pattern 🎄
#include <stdio.h>

// Function to print one row of the pyramid
void printRow(int spaces, int stars) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
    printf("\n");
}

// Function to print the full pyramid
void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        int spaces = n - i;
        int stars = 2 * i - 1;
        printRow(spaces, stars);
    }
}

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    printPyramid(n);

    return 0;
}