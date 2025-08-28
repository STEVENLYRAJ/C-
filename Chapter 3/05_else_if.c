//
// Created by steve on 28-08-2025.
//

#include <stdio.h>

int main() {
    int age;

    // Ask user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>60) {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age>40) {
        printf("You can drive and you are elder\n");
    }
    else if (age>18) {
        printf("You can drive\n");
    }
    else {
        printf("You cannot drive");
    }
    return 0;
}