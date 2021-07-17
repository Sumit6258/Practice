//
// Created by Sumit Suman on 26-01-2021.
//

#include<stdio.h>
int GCD(int a, int b);

int GCD(int a, int b)
{
    int gcd;
    for(int i = 1; i <= a && i <= b; i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            gcd = i;
        }
    }
    printf("\nGCD of %d and %d is %d ",a,b,gcd);
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    GCD(a,b);
    return 0;
}