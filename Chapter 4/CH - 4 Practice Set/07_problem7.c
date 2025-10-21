//
// Created by steve on 18-09-2025.
//
// Calculate the sum of the numbers occurring in the multiple table of 8
#include <stdio.h>

int main () {
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8*i);
    }


    printf("Sum of the numbers occurring in the multiple table of 8 is %d\n", sum);
    return 0;
}