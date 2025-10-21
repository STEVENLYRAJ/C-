//
// Created by steve on 18-09-2025.
//

// Multiplication Table of a given number n
#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    return 0;
}