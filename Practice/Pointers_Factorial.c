//
// Created by Sumit Suman on 13-02-2021.
//
#include<stdio.h>
void fact(int, int *);

void fact(int a, int *f) {
    *f = 1;
    for (int i = 1; i <= a; i++)
    {
        *f = *f * i;
    }
}
int main()
{
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);

    fact(a, &b);

    printf("Factorial of %d : %d",a,b);
    return 0;
}