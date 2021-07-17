//
// Created by Sumit Suman on 18-01-2021.
//
#include<stdio.h>

int area_sq(int s)
{
    int a;
    a = s * s;
    return a;
}
int perimeter_sq(int s)
{
    int p;
    p = 4 * s;
    return p;
}
int main()
{
    int x,y,s;
    printf("Enter Length of Rectangle : ");
    scanf("%d",&s);
    //printf("\nEnter Breadth of Rectangle : ");
    //scanf("%d",&b);

    x = area_sq(s);
    y = perimeter_sq(s);
    printf("\nArea of Rectangle = %d\n\nPerimeter of Rectangle = %d",x,y);

    return 0;
}