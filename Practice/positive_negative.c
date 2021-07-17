//
// Created by Sumit Suman on 25-01-2021.
//
#include<stdio.h>

int check_sign(int num)
{
    if(num>0)
        printf("%d is positive",num);
    else if(num<0)
        printf("%d is negative",num);
    else
        printf("%d is zero",num);
    return num;
}

int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf(check_sign(n));
    return 0;
}

