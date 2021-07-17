//CSD20045
// Created by Sumit Suman on 09-01-2021.
//CVGU
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);

    printf("(Bitwise AND) %d & %d = %d",a,b,a&b);
    printf("\n(Bitwise OR) %d | %d = %d",a,b,a|b);
    printf("\n(Bitwise XOR) %d ^ %d = %d",a,b,a^b);
    printf("\n(Bitwise complement) Bitwise complement Operation of %d and %d = %d and %d",a,b,~a,~b);

    for(int i = 1; i<=2; ++i)
        printf("\nRight Shift by %d of %d = %d",i,a,a>>i);
    for(int i = 1; i<=2; ++i)
        printf("\nLeft Shift by %d of %d = %d",i,b,b<<i);

    return 0;
}

