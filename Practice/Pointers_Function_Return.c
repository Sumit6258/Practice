//
// Created by Sumit Suman on 13-02-2021.
//
#include<stdio.h>

int *return_ptr()
{
    static int a = 9;
    return(&a);

}

int main()
{
    int* n;

    n = return_ptr();

    printf("Address : %p\n",n);
    printf("Value : %d",*n);

    return 0;
}