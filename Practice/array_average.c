//
// Created by Sumit Suman on 18-01-2021.
//
#include <stdio.h>
#define size 50
int main()
{
    int arr[size];
    int i, n, sum=0;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter %d elements in the array:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum += arr[i];
    }

    float avg = sum/n;
    printf("\nAverage of all elements in array = %.2f", avg);

    return 0;
}