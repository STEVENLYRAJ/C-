//
// Created by steve on 19-10-2025.
//
#include <stdio.h>

int factorial(int);
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 X 2 X 3 X 4 .......... X (n-1) X n
int factorial(int n) {
    if (n == 0 || n == 1) { // Base Condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);
}
int main() {
    int a = 5;
    printf("The factorial of %d is %d\r\n", a, factorial(a));

    return 0;
}