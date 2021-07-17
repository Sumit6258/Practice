//
// Created by Sumit Suman on 17-12-2020.
//
#include<stdio.h>
int main()
{
    int a = 1,b;
    printf("%d,%d,%d", --a, a, a--); //10
    return 0;
}












//b = ++a; //1
    //b = a++; //2
    //b = ++a + ++a; //3
    //b = a++ + ++a; //4
    //b = ++a + ++a; //5
    //b = ++a + a++;
    //b = ++a + a++ + ++a; //6 a=16, b=45
    //b = a++ + a++ + ++a; //7 b = 16+17+19, a = 19
    //b = a++ + ++a + ++a; //8 b = 19+21+22, a = 22
    //b = a++ + ++a + a++; //9 b = 22+24+24
    //printf("%d",a);
    //printf("\n%d",b);
