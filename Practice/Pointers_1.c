//
// Created by Sumit Suman on 13-02-2021.
//

#include<stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;
    printf("Address of a = %u",  &a);
    printf("\nAddress of a = %u", p);
    printf("\nAddress of a = %u", &p);
    printf("\nValue of p = %u",p);
    printf("\nValue of a = %d",a);
    printf("\nValue of a = %d", *(&a));
    printf("\nValue of a = %d", *p);

    return 0;
}



