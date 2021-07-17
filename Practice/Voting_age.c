//CVGU
// Created by Sumit Suman on 24-01-2021.
//CSD20045
#include<stdio.h>
int voting_age(int);

int voting_age(int age)
{
    if(age >= 18)
        printf("You are eligible to cast your vote!");
    else {
        printf("Sorry,you are not eligible to cast your vote!");
        printf("\nYou can cast your vote after %d years.\n", 18 - age);
    }
    return age;
}
int main()
{
    int a;
    printf("Enter your age:");
    scanf("%d",&a);
    printf(voting_age(a));
    return 0;
}
