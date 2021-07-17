//
// Created by Sumit on 21-01-2021.
//
#include<stdio.h>

int factorial(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\n Factorial:%d",factorial(n));
    return 0;
}

int factorial(int num)
{
    if (num == 0 || num == 1)
        return (1);
    return (num * factorial(num-1));
}

