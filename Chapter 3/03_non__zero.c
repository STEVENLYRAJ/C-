//
// Created by steve on 28-08-2025.
//

#include <stdio.h>

int main() {

    if (1) {
        printf("This if is executed.\n");
    }
    if (4768547) {
        printf("This if is also executed.\n");
    }
    if (3.14) {
        printf("This if is also executed.\n");
    }
    if ('kfdsfh') {
        printf("This character inside if is also executed.\n");
    }
    if (0) {
        printf("I'm zero - I am not executed.\n");
    }
    return 0;
}