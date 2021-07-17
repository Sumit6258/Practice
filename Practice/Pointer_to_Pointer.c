//
// Created by Sumit Suman on 12-02-2021.
//

#include<stdio.h>

int main( )
{
    int a = 9;

    int *p;
    int **q;

    p = &a;
    q = &p;

    printf("Address of a = %p\n",&a);
    printf("p is pointing to the address = %p\n",p);
    printf("q is pointing to the address = %p\n",q);
    printf("Value of a = %d\n",a);
    printf("Value available at *p = %d\n",*p);
    printf("Value available at **q = %d\n",**q);

    //printf ( "\nAddress of a = %u", &a ) ;
    /*
    printf ( "\nAddress of a = %u", p ) ;
    printf ( "\nAddress of a = %u", *q ) ;
    printf ( "\nAddress of p = %u", &p ) ;
    printf ( "\nAddress of p = %u", q ) ;
    printf ( "\nAddress of q = %u", &q ) ;
    printf ( "\nValue of p = %u", p ) ;
    printf ( "\nValue of q = %u", q ) ;
    printf ( "\nValue of a = %d", a ) ;
    printf ( "\nValue of a = %d", * ( &a ) ) ;
    printf ( "\nValue of a = %d", *p ) ;
    printf ( "\nValue of a = %d", **q ) ;
    */
    return 0;
}