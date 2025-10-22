//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int main() {
    int a = 5;
    printf("%d %d %d \n", a, ++a, a++);
    // 7 7 5 (Evaluation order is from right to left)
    // 5 6 6 (Evaluation order is from left to right)
    return 0;
}
