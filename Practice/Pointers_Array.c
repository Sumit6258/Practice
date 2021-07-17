//CVGU
// Created by Sumit Suman on 13-02-2021.
//CSD20045

#include <stdio.h>
#define size 50

int main()
{
    int arr[size];
    int n, i;
    int *p = arr;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter elements in array: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", p);
        p++;
    }

    p = arr;

    printf("\nElements in array are: ");

    for (int i = 0; i < n; i++)
    {
        printf("\n%d", *p);
        p++;
    }
    return 0;
}
