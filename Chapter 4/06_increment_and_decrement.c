//
// Created by steve on 17-09-2025.
//
#include <stdio.h>

int main() {
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);

    i +=2; // same as i = i + 2;
    printf("The value of i is %d\n", i);
    // i++ prints i first then increments i (Post Increment Operator)
    // ++i Increments i first then prints i (Pre Increment Operator)
    return 0;
}