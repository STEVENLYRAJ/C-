//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int change_to_thirty_times(int* a) {
    *a = *a * 30;
}

int main() {
    int s = 75;
    printf("Value of s is %d\n", s);
    change_to_thirty_times(&s);
    printf("Value of s is %d\n", s);
    return 0;
}