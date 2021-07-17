//CSD20045
// Created by Sumit Suman on 09-01-2021.
//CVGU
#include<stdio.h>
int main()
{
    int a,b,gcd;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    int i;
    for(i = 1; i <= a && i <= b; i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            gcd = i;
        }
    }
    printf("\nGCD of %d and %d is %d ",a,b,gcd);

    //printf("\n");
    return 0;


    /*
    int iscoprime(int a, int b){

        int t;
        if(a < b){t=a; a=b; b=t;}
        while (!(b == 0)){
            t = b;
            b = a%b;
            a = t;
        }
        if(a == 1)
            return 1;
        else
            return 0;
    }
    */
}

