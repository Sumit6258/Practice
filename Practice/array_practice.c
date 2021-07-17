//
// Created by Sumit Suman on 12-01-2021.
//

#include<stdio.h>
#define asize 50
int main()
{
    int size,search,i,b;
    int a[asize];
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter elements in array: ");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter an element to search: ");
    scanf("%d",&search);


    for(i = 0;i<size;i++)
    {
        if(a[i] == search)
        {
            b = 1;
            break;
        }
    }

    if(b == 1)
    {
        printf("\n %d is at the position %d",search,i+1);
    }
    else
    {
        printf("\n%d is not in array",search);
    }

    return 0;

}
//#SumitSumanSumit@6258#
/*
CLion 2020.3
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

 //
// Created by Sumit Suman on 12-01-2021.
//
#include<stdio.h>
#define asize 50
int main()
{
    int size,search,asearch,i;
    int a[asize];
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter elements in array: ");
    for(i = 0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter an element to search: ");
    scanf("%d",&search);
    asearch = 0;

    for(i = 0;i<size;i++)
    {
        if(a[i] == search)
        {
            asearch = 1;
            break;
        }
    }

    if(asearch == 1)
    {
        printf("\n%d is at the position %d",search,i+1);
    }
    else
    {
        printf("\n%d is not in the array", search);
    }
    return 0;

}
//#SumitSumanSumit@6258#
CLion 2020.3
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


