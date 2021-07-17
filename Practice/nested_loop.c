//
// Created by user on 05-01-2021.
//

#include<stdio.h>
int main()
{
    int n = 10;
    for (int i = n; i >= 1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}