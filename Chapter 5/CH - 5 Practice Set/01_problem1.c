//
// Created by steve on 21-10-2025.
//
#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c) {
    return (a + b + c)/3.0;

}
int main() {
    int a = 9657;
    int b = 7345;
    int c = 8907;
    printf("The average of a, b, and c is %f\n", average(a, b, c));
    return 0;
}