//
// Created by Zhefali Ranjan on 30-01-2021.
//ECE20027

#include<stdio.h>
int fibo(int);

int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n-1) + fibo(n - 2);
}

int main()
{
    int t;
    printf("Enter the number of terms: ");
    scanf("%d", &t);

    for(int n = 0; n < t; n++)
    {
        printf("%d, ", fibo(n));
    }
    return 0;

}