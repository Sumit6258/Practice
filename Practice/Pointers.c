//
// Created by Sumit Suman on 27-01-2021.
//

#include<stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a = %d",a);
    printf("\nValue of a = %d",*p);

    return 0;
}