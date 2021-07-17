// Created by Sumit Suman on 25-01-2021.
//
#include<stdio.h>

int large_three(int a, int b, int c)
{
    int large = 0;
    if(a > b && a > c)
        large = a;
    else if(b > a && b > c)
        large = b;
    else
        large = c;
    return large;
}

int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("largest number is: %d\n",large_three(a,b,c));
    return 0;
}