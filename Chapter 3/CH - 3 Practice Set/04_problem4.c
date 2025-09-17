//
// Created by steve on 09-09-2025.
//

#include <stdio.h>

int main() {
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if ((year %4==0 && year%100!=0) || year %400==0) {
        printf("This is a leap year");
    }
    else {
        printf("This is not a leap year");
    }


    return 0;
}