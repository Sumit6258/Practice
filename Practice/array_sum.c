// Created by Sumit Suman on 18-01-2021.
#include <stdio.h>
#define size 50
int main()
{
    int arr[size];
    int i,n,j;
    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter %d elements in the array:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(j=0; j<n; j++)
    {
        sum += arr[j];
    }
    printf("\nSum of all the elements of array = %d", sum);
    return 0;
}