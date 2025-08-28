//
// Created by steve on 28-08-2025.
//

#include <stdio.h>

int main() {
    int age;

    // Ask user for input
    printf("ENTER YOUR AGE: \n");
    scanf("%d",&age);


    if (age >= 18) {
        printf("Yor are eligible (above the age of consent) for driving, voting, and now you are not just a teenage boy or girl but also a matured citizen of our country.\n");
    } else {
        printf("You are not eligible (below the age of consent).\n");
    }

    return 0;
}