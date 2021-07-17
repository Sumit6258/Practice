//
// Created by Sumit Suman on 18-01-2021.
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

    printf("\n\nArray in reverse order: ");
    for(i = n-1; i>=0 ; i--)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}
