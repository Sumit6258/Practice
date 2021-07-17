//
// Created by Sumit Suman on 26-01-2021.
//

#include<stdio.h>
int LCM(int a, int b);

int LCM(int a, int b)
{
    int gcd,lcm;
    for(int i = 1; i <= a && i <= b; i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd;

    printf("\nLCM of %d and %d is %d ",a,b,lcm);
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    LCM(a,b);
    return 0;
}
