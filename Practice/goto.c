//
// Created by Sumit on 06-01-2021.
//
#include<stdio.h>
int main()
{
    int a = 10;

    GO:do{

        if(a%2 != 0){
            a++;
            goto GO; //
        }

        printf("%d\n", a);
        a++;

    }while(a<20);

    return 0;
}
