//
// Created by Sumit Suman on 13-02-2021.
//

#include<stdio.h>
int add(int *, int *);

int add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    printf("Sum of entered numbers :%d",add(&a,&b));
    return 0;

}