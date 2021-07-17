//
// Created by Shefali Ranjan on 30-01-2021.
//ECE20027

#include<stdio.h>
long power(int, int);

long power(int n, int p)
{
    if(p)
    {
        return (n * power(n, p-1));
    }
    return 1;
}

int main()
{
    int n, p;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter it's power:");
    scanf("%d",&p);
    printf("\n%d to the power %d = %d\n",n, p, power(n,p));
    return 0;
}





















