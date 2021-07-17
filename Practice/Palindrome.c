//
// Created by Sumit Suman on 05-01-2021.
//
#include <stdio.h>
int main() {
    int n, reverse = 0, remainder, initial;
    printf("Enter an integer: ");
    scanf("%d", &n);
    initial = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (initial == reverse)
        printf("%d is a palindrome.", initial);
    else
        printf("%d is not a palindrome.", initial);

    return 0;
}
