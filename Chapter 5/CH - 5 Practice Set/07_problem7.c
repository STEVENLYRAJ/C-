//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

// Function to print stars in one line
void printLineStars(int);

void printLineStars(int count) {
    for (int i = 0; i <= count; i++) {
        printf("*");
    }
    printf("\n"); // moves to next line
}

// Function to print the pattern
void printPattern(int);

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        printLineStars(i);
    }
}
int main() {
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);

    printPattern(n);

    return 0;

}