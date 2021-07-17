//
// Created by Sumit Suman on 26-01-2021.
//
#include<stdio.h>

int inter_prime(int x)
{
    int j,div = 0;
    for (j = 2; j <= x/2; ++j)
    {
        if ( x % j == 0)
        {
            div = 1;
            break;
        }
    }
    return div;
}

int main ()
{
    int n1, n2,div;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are:\n", n1, n2);

    for (int i = n1 + 1; i < n2; ++i)
    {
        div = inter_prime(i);
        if (div == 0)
            printf("%d\t", i);
    }

    return 0;
}
