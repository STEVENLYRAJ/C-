//
// Created by steve on 17-09-2025.
//

#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++)
        {
        if (i==5) {
            // break; // exit the loop now
            continue; //  exit this iteration now
        }

        printf("i is %d\n", i);
    }

    printf("For Loop is done!");

    return 0;

}