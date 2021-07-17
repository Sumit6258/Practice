//
// Created by Sumit Suman on 25-01-2021.
//
#include <stdio.h>
int leap_year(int y)
{
    if (y % 400 == 0 || y % 4 == 0)
        return 1;
    else if(y % 100 == 0)
        return 0;
    else
        return 0;
}
int main()
{
    int year;
    printf("Enter any year:");
    scanf("%d", &year);
    if(leap_year(year))
        printf("\n%d is leap year",  year);
    else
        printf("\n%d is not leap year", year);
    return 0;
}

