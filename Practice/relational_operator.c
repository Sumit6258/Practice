//CSD20045
// Created by Sumit Suman on 10-01-2021.
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a == b)
        printf("%d == %d is True\n",a,b);
    if(c != d)
        printf("%d != %d is True\n",c,d);
    if(a > d)
        printf("%d > %d is True\n",a,d);
        else
            printf("%d > %d is False\n",a,d);
    if(c < d)
        printf("%d < %d is True\n",c,d);
    if(d <= c)
        printf("%d <= %d is True\n",d,c);
        else
            printf("%d <= %d is False\n",d,c);
    if(a >= b)
        printf("%d >= %d is True\n",a,b);
    else
        printf("Condition is False");
    return 0;
}
