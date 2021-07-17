//
// Created by Sumit Suman on 28-01-2021.
//
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i;
    ptr = malloc(sizeof(int));

    ptr[0] = 1;//memory allocated for only 1 integer

    //realloc memory size to store 3 integers
    ptr = realloc(ptr, 3 * sizeof(int));
    ptr[1] = 2;
    ptr[2] = 3;


    for(i = 0; i < 3; i++)
        printf("%d\n",ptr[i]);

    return 0;
}