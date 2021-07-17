//
// Created by Sumit Suman on 12-01-2021.
//
#include <stdio.h>
#define size 50
int main()
{
    int arr[size];
    int n, i;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");

    for (int i = 0; i < n; i++) {
        printf("\n%d", arr[i]);
    }
    return 0;
}





//2D Array




/*
int main()
{
    int arr[4][4],i,j;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)                                                       //CLion 2020.3
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
 Build #CL-203.5981.166, built on December 2, 2020
Licensed to Sumit Suman
Subscription is active until November 23, 2021
For educational use only.
Runtime version: 11.0.9+11-b1145.21 amd64
VM: OpenJDK 64-Bit Server VM by JetBrains s.r.o.
Windows 10 10.0
GC: ParNew, ConcurrentMarkSweep
Memory: 1987M
Cores: 8
Registry: run.processes.with.pty=TRUE

 */