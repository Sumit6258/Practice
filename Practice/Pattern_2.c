//CSD20045
// Created by Sumit Suman on 05-01-2021.
//CVGU
#include<stdio.h>
int main()
{
    int n = 5;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",(char)(i+64));
        }
        printf("\n");
    }
    return 0;
}
