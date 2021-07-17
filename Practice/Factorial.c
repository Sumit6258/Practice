//
// Created by Sumit Suman on 31-12-2020.
//
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long f = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("You Entered a negative number");

    else{
        for (i = 1; i <= n; ++i)
        {
            f *= i;
        }

        printf("Factorial of %d = %llu", n, f);
    }

    return 0;

}


