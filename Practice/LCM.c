//CSD20045
// Created by Sumit Suman on 09-01-2021.
//CVGU
#include <stdio.h>
int main()
{
    int a, b, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; ++i) {

        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", a, b, lcm);
    return 0;
}




/*
int main()
{
    int n1, n2, lcm=1;
    printf("\nLCM of two numbers:\n ");
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);


    int max = (n1>n2) ? n1 : n2;


    for(int i=max;  ; i+=max)
    {

        if(i%n1==0 && i%n2==0)
        {
            lcm = i;
            break;
        }
    }

    printf("\nLCM of %d and %d = %d\n\n", n1, n2, lcm);

    return 0;
}
*/


/*
int main()
{

    int a, b, lcm;
    printf("\nEnter two numbers: ");
    scanf(“%d %d”, &a, &b);

    lcm = (a > b) ? a : b;

    while(1)
    {
        if( lcm % a == 0 && lcm % b == 0 )
        {
            printf(“\nLCM of %d and %d is %d\n”, a, b,lcm);
            break;
        }
        ++lcm;
    }



    return 0;
}
*/


