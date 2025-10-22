//
// Created by steve on 22-10-2025.
//
#include <stdio.h>
int naturalNumber(int);

int naturalNumber(int n) {
    if (n == 0)
        return 0;   // Base case
    else;
        return n + naturalNumber(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers = %d\n", n, naturalNumber(n));
    return 0;
}