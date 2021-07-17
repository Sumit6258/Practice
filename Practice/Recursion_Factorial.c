//
//Created by Sumit Suman on 30-01-2021.
//CSD20045
#include<stdio.h>
int rec(int);

int rec(int x)
{
    int f;
    if(x == 1)
        return(1);
    else
        f = x * rec(x-1);
    return f;
}

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Factorial of %d = %d", a, rec(a));
    return 0;
}