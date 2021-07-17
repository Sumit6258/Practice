//CSD20045
// Created by Sumit Suman 05-01-2021.
//CVGU
#include<stdio.h>
int main()
{
    int n,m;
    n = m = 4;
    for(int i = 1; i<=n ; i++)
    {
        for(int j = 1; j<=m-1; j++) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("1");
        }
        m--;
        printf("\n");
    }
    return 0;
}

