#include <stdio.h>
#define MAX 10
int main() {
    int matrix[MAX][MAX], n, i, j;

    printf("Enter the size of the square matrix (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
    }

    printf("\n");

    return 0;
}