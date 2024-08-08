#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrices can't be multiplied.\n");
        return 0;
    }

    int b[p][q], result[m][q];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}

