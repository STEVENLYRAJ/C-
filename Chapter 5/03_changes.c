//
// Created by steve on 19-10-2025.
//
#include <stdio.h>

int changes(int d);

int change(int d) {
    d = 96; // Misnomer
    return 0;
}
int main() {
    int e = 84;
    change(e); // The value of e is remains 864

    printf("e is %d\n", e);

    return 0;
}