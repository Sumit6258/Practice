//
// Created by Sumit Suman on 13-02-2021.
//
#include<stdio.h>
#define size 50

int main()
{
    int n, i, arr[size];
    int *p;

    p = &arr[0];

    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }

    p = &arr[n - 1];

    printf("\nElements of array in reverse order :");

    for (i = n - 1; i >= 0; i--)
    {
        printf("\n%d",*p);
        p--;
    }
    return 0;
}