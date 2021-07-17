//
// Created by Sumit Suman on 18-01-2021.
//
#include<stdio.h>
#define size 50
int main()
{
    int arr[size];
    int i, n, j, max, max2;

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
            j = i;
        }
    }

    max2 = 0;
    for(i = 0;i<n;i++)
    {
        if(i==j)
        {
            i++;
            i--;
        }
        else
        {
            if(max2 < arr[i])
            {
                max2 = arr[i];
            }
        }
    }
    printf("Second largest element of an array = %d", max2);
    return 0;
}

