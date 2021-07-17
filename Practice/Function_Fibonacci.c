//
// Created by Sumit Suman on 25-01-2021.
//

#include<stdio.h>

int fibo(int n)
{
    int i, t1 = 0, t2 = 1, n2;
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        n2 = t1 + t2;
        t1 = t2;
        t2 = n2;
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibo(n);
    return 0;

}