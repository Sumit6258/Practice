//CSD20045
// Created by Sumit Suman on 10-01-2021.
//
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("c = %d is %d\n",a,c=a);
    printf("c += %d is %d\n",b,c += b);
    printf("c -= %d is %d\n",a,c -= a);
    printf("c *= %d is %d\n",b, c *= b);
    printf("c /= %d is %d\n",a, c /= a);
    printf("c %= %d is %d\n",b, c%= b);
    return 0;
}
