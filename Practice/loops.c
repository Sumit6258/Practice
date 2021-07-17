#include<stdio.h>
int main()
{
    int n = 10;
    for (int i = 1; i < n; i++)
    {                        //j = 1 + 3
        for(int j = 0; j <= i; j = j + 3)//
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}















/*
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("%d", sum);
     */

