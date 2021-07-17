//
// Created by Sumit Suman on 13-02-2021.
//

#include<stdio.h>

int main()
{
    int a, b, *p, *q, sum;

    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    p = &a;
    q = &b;

    sum  = *p + *q;

    printf("Sum of entered numbers : %d",sum);

    return 0;
}

