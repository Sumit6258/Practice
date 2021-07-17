//CSD20045
// Created by Sumit Suman on 09-01-2021.
//CVGU

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("%d+%d = %d \n",a,b,c);
    c = a-b;
    printf("%d-%d = %d \n",a,b,c);
    c = a*b;
    printf("%d*%d = %d \n",a,b,c);
    c = a/b;
    printf("%d/%d = %d \n",a,b,c);
    c = a%b;
    printf("Remainder when a divided by %d = %d \n",b,c);

    return 0;
}
