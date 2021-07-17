//
//Created by Shefali Ranjan on 30-01-2021.
//ECE20027

#include<stdio.h>
void n_sum(int);

void n_sum(int n)
{
    static int sum = 0;
    if(n == 0)
    {
        printf("Sum of natural numbers upto nth number = %d\n", sum);
        return;
    }
    else
    {
        sum += n;
        n_sum(--n);
    }
}

int main()
{
    int a;
    printf("Enter the nth number:");
    scanf("%d", &a);
    n_sum(a);
    return 0;
}