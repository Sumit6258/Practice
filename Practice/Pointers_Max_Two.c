//
// Created by Sumit Suman on 13-02-2021.
//

#include<stdio.h>

int main()
{
    int a, b, *p, *q;

    p = &a;
    q = &b;

    printf("Enter two numbers :");
    scanf("%d %d",p,q);

    if(*p > *q)
    {
        printf("Largest number is %d",*p);
    }

    else if(*p < *q)
    {
        printf("Largest number is %d",*q);
    }
    else
    {
        printf("Both numbers are equal");
    }
    return 0;
}