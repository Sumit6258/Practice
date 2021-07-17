//
//Created by Shefali Ranjan on 30-01-2021.
//ECE20027

#include<stdio.h>
int gcd(int, int);

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a-b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a,b;
}

int main()
{
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d \n",a,b,gcd(a,b));
    return 0;

}
