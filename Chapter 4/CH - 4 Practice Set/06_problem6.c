//
// Created by steve on 18-09-2025.
//
//Implementation of problem 5 using 'for' and 'do-while' loop

#include <stdio.h>
int main () {
    //  USING DO-WHILE LOOP

    //     int i = 1;
    //     int sum = 0;
    //     do {
    //         sum += i;
    //         i++;
    //     }while (i<=10);

    //  USING FOR LOOP
    int sum =0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first ten natural number is %d\n", sum);

    return 0;
}