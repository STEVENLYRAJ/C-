//
// Created by steve on 18-09-2025.
//
// Using different loop we have to check whether the given number is prime or not by using while and do-while loops
#include <stdio.h>

int main() {
    int n = 5;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        // do
        // {
        //     if (n % i == 0 && n!=2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // } while (i < n);
        while (i < n)
            {
            if (n % i == 0 && n!=2)
            {
                not_prime = 1;
                break;
            }
            i++;
            }

    }
    if(not_prime) {
        printf("%d is not prime\n", n);
    }
    else {
        printf("%d is prime\n", n);
    }
    return 0;
}