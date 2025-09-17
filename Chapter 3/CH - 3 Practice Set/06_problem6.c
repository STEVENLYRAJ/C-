//
// Created by steve on 10-09-2025.
//

#include <stdio.h>
int main() {
    int a=657, b=976, c=324, d=964;
    if (a>b && a>c && a>d) {
        printf("The greatest of all is %d", a);
    }
    else if (b>a && b>c && b>d) {
        printf("The greatest of all is %d", b);
    }
    else if (b>a && b>c && b>d) {
        printf("The greatest of all is %d", c);
    }
    else if (b>a && b>c && b>d) {
        printf("The greatest of all is %d", d);
    }
    return 0;
}