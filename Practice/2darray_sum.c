//
// Created by  on 12-01-2021.
//
#include<stdio.h>
int main()
{
    int arr[4][4],i,j;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing the elements ....\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    return 0;
}

