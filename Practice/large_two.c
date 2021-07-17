//CVGU
// Created by Sumit Suman on 25-01-2021.
//CSD20045

#include<stdio.h>
int large_two(int,int);

int large_two(int a, int b)
{
    if(a>b)
        printf("Largest number is %d",a);
    if(a<b)
        printf("Largest number is %d",b);
    else
        printf("Both numbers are equal");
}

int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    large_two(n1,n2);
    return 0;
}
