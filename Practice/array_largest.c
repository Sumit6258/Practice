//
// Created by Sumit Suman on 18-01-2021.
//
#include<stdio.h>
#define size 50
int main()
{
    int arr[size];
    int max,n,i;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter %d elements in the array:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nLargest element of array = %d", max);
    return 0;
}



