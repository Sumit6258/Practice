//
// Created by Priyadarsini Paikaray on 18-01-2021.
//

#include <stdio.h>
#define r 50
#define c 50
int main()
{
    int a[r][c], b[r][c], sum[r][c], i, j,p,q;
    printf("Enter the number of rows: ");
    scanf("%d", &p);
    printf("Enter the number of columns: ");
    scanf("%d", &q);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < p; ++i)
        for (j = 0; j < q; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < p; ++i)
        for (j = 0; j < q; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }


    for (i = 0; i < p; ++i)
        for (j = 0; j < q; ++j) {
            sum[i][j] = a[i][j] * b[i][j];
        }


    printf("\nMultiplication of two matrices: \n");
    for (i = 0; i < p; ++i) {
        for (j = 0; j < q; ++j) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}