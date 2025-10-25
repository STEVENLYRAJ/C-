//
// Created by steve on 24-10-2025.
//
//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

void change_to_ten_times(int );

void change_to_ten_times(int a) {
    a = a * 10;
}

int main() {
    int s = 75;
    printf("Value of s is %d\n", s);
    change_to_ten_times(s);
    printf("Value of s is %d\n", s);
    return 0;
}