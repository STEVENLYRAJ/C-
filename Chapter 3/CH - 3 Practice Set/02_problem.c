//
// Created by steve on 06-09-2025.
//

#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4;
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("Enter marks4: \n");
    scanf("%d", &marks4);
    printf("The marks are %d %d %d and %d\n", marks1, marks2, marks3, marks4);

    if (marks1<= 33 || marks2<= 33 || marks3<= 33 || marks4 <= 33) {
        printf("You are failed due to low marks in individual subjects(s)\n");
    }
    else if ((marks1 + marks2 + marks3 + marks4)/4 < 40) {
        printf("You are failed due to less percentage\n");
    }
    else {
        printf("You are passed!");
    }
    return 0;
}