//CSD20045
// Created by Sumit Suman 05-01-2021.
//CVGU
#include<stdio.h>
int main()
{
    int n,m;
    n = m = 5;
    for(int i = 1; i<=n ; i++) {
        for (int j = 1; j <= m; j++) {
            printf(" ");
        }
            for (int k = 1; k <= 2 * i - 1; k++) {
                printf("*");

            }

        m--;

        printf("\n");

    }

    return 0;

}

