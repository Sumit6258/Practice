//
// Created by Sumit Suman on 09-01-2021.
//
#include <stdio.h>
int main ()
{
    int n1, n2,div;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are:\n", n1, n2);
    for (int i = n1 + 1; i < n2; ++i)
    {
        div = 0;
        for (int j = 2; j <= i/2; ++j)
        {
            if (i % j == 0)
            {
                div = 1;
                break;
            }
        }
        if (div == 0)
            printf("%d\n", i);
    }
    return 0;
}
