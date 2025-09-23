// WAP to calculate an angle between hour and minute hand. (Hours and minutes should betaken from user)
// only m1 and n2 matters other is same as simple and should be less than n1
#include <stdio.h>
void main() {
    int m1, n1, m2, n2;
    printf("Enter rows and columns for first matrix (A): ");
    scanf("%d%d", &m1, &n1);
    printf("Enter rows and columns for second matrix (B): ");
    scanf("%d%d", &m2, &n2);
    if (n1 != m2) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }
    int A[m1][n1], B[m2][n2], result[m1][n2];
    printf("Enter elements of first matrix (A):\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix (B):\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
