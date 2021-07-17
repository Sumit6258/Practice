//
// Created by Sumit on  06-01-2021.
//

#include<stdio.h>
int main()
{
    int n = 5;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}