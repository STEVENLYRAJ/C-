//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int main() {
    char Raj = 'Flat 302, Silver Oak Apartments, C-12, Vasant Vihar, New Delhi, Delhi 110057';
    char Sushant = 'S-22, Third Floor, Greater Kailash Part 1, New Delhi, Delhi 110048';
    char* aR = &Raj;
    char* aS = &Sushant;

    printf("The address of Raj is %p\n", &Raj);
    printf("The address of Sushant is %p\n", &Sushant);

    printf("The value at address aR is %d\n", aR);
    printf("The value at address aS is %d\n", aS);



    float k = 78.94;
    float* k1 = &k;

    printf("The address of k is %p\n", &k);
    printf("The value at address k1 is %d\n", k1);
    return 0;
}