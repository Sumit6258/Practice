//
// Created by Sumit Suman on 18-01-2021.
//
#include<stdio.h>
#define size 50
int main()
{
    int arr[size];
    int i, n;

    printf("Enter size of the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int small = arr[0];
    for(i = 1; i < n; i++)
    {
        if(small > arr[i])
        {
            small = arr[i];
        }
    }

    printf("Smallest element of an array = %d", small);
    return 0;
}

