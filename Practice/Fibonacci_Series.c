//CSD20045
// Created by Sumit Suman on 05-01-2021.
//CVGU
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, n2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        n2 = t1 + t2;
        t1 = t2;//3
        t2 = n2;//2
    }

    return 0;
}