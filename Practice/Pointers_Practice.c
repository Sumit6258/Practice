//
// Created by Sumit Suman on 13-02-2021.
//

#include<stdio.h>

int main()
{

    int a = 21;

    printf("Address \t Name \t Value \n");

    printf("\n%p \t %s \t %d \n",&a, "a", a);

    int *b = &a;

    printf("%p \t %s \t %d \n",&b, "a", a);

    return 0;

}