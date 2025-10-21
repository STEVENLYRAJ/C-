//
// Created by steve on 07-10-2025.
//
#include <stdio.h>

// Function Prototype
int sum(int, int);


// Function Definition
int sum (int x, int y) {
    // printf("Sum of two numbers is %d\n", x+y);
    return x+y;
}
int main() {
    int d =7348;
    int e = 9833;

    // int f = d + e;
    // printf("The sum is: %d\n", c);
    int f = sum(d, e); // Function Call
    printf("%d\n", f);


    int g =9865;
    int h = 4733;

    // int i = g + h;
    // printf("The sum is: %d\n", i);
    sum(g, h); // Function Call

    int j =7968;
    int k = 9836;

    // int l = j + k;
    // printf("The sum is: %d\n", l);
    sum(j, k); // Function Call

    int m =7500;
    int n = 9999;

    // int o = m + n;
    // printf("The sum is: %d\n", o);
    sum(m, n); // Function Call

    int p =7008;
    int q = 6233;

    // int r = p + q;
    // printf("The sum is: %d\n", r);
    sum(p, q); // Function Call

    return 0;
}