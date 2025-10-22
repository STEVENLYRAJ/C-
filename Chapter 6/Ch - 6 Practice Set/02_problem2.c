//
// Created by steve on 22-10-2025.
//
#include <stdio.h>


int returning_7(int* k) {
    printf("The value of k is %d\n", k);
    printf("The value at k is %d\n", *k);
    return 7;
}
int main() {
    int i = 10;
    int* k = &i;

    printf("Address of i is %u\n", &i);
    returning_7(k);
    return 0;
}