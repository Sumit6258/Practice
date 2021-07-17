//
// Created by Sumit Suman on 18-01-2021.
//

#include<stdio.h>

int coprime(int n1, int n2)
{
    int min, count, x = 1;

    min = n1 < n2 ? n1 : n2;

    for(count = 2; count <= min; count++)
    {
        if( n1 % count == 0 && n2 % count == 0 )
        {
            x = 0;
            break;
        }
    }

    return(x);
}

int main()
{
    int n1, n2;

    printf("Enter 2 positive numbers\n");
    scanf("%d%d", &n1, &n2);

    if( coprime(n1, n2) )
    {
        printf("%d and %d are co-prime numbers.\n", n1, n2);
    }
    else
    {
        printf("%d and %d are not co-prime numbers.\n", n1, n2);
    }

    return 0;
}
