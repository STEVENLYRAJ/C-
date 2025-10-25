//
// Created by steve on 22-10-2025.
//
#include <stdio.h>

int* sum(int a, int b) {
    int s = a + b;
    printf("The sum is  %d\n", s);

    return &sum;

}

float* average(int a, int b) {
    float avg = (a + b)/2.0;
    printf("The average is  %f\n", avg);

    return &average;
}

int main() {
    int x, y;
    printf("Enter 1st number:");
    scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);

    int* ptr1;
    float* ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("The address of sum is %u and of average is %u", ptr1, ptr2);
    return 0;


}