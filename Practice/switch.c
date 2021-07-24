//  CSD20045
// Created by Sumit Suman on 29-12-2020.
// 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter score(0-100): ");
    scanf("%d",&a);
    switch(a)
    {
        case 91 ... 100:
            printf("Grade: A");
            break;
        case 81 ... 90:
            printf("Grade: B");
            break;
        case 71 ... 80:
            printf("Grade: C");
            break;
        case 61 ... 70:
            printf("Grade: D");
            break;
        default:
            printf("You Fail!!!");
            break;
    }
    return 0;
}
//
