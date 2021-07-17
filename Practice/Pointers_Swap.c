//
// Created by Sumit Suman on 13-02-2021.
//

#include<stdio.h>
void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    int a,b;
    printf("Enter two numbers a and b :");
    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("After swapping numbers:\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    return 0;

}
