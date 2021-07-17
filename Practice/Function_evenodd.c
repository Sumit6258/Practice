//CVGU
// Created by Sumit Suman on 21-01-2021.
//CSD20045
#include <stdio.h>

int checkEvenOdd(int n) {
    return (n & 1);
}
int main()
{
    int n;
    printf("Input any number:");
    scanf("%d", &n);

    if(checkEvenOdd(n))
    {
        printf("The entered number is odd.\n");
    }
    else
    {
        printf("The entered number is even.");
    }
    return 0;
}
