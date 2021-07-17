//CSD20045
// Created by Sumit Suman on 05-01-2021.
//
#include <stdio.h>
int main() {
    int n, r = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        r = r * 10 + rem;
        n = n/ 10;
    }
    printf("Reversed number = %d", r);
    return 0;
}