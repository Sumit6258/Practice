//
// Created by Sumit Suman on 16-12-2020.
//

#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    printf("Enter your name:");
    scanf("%s",&c);
    printf("Hello,%s",c);
    printf("\nLength of your name is %d",strlen(c));

    return 0;
}