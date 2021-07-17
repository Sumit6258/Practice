// Created by Sumit Suman on 09-01-2021.
#include <stdio.h>
int main()
{
    int a=40,b=20;
    int c=20,d=30;
    if (a>b && a !=0)
    {
        printf("&& Operator : Both conditions are true\n");
    }
    if (c>d || d!=20)
    {
        printf("|| Operator : Only one condition is true\n");
    }
    if (!(a>b && a !=0))
    {
        printf("! Operator : Both conditions are true");
    }
    else
    {
        printf("! Operator : But conditions are true but '!' inverted the condition");
    }
    return 0;
}