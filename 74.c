#include <stdio.h>
#define MAX 10      
void transpose(int matrix[MAX][MAX], int transposed[MAX][MAX], int row, int col);   
int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int row, col, i, j;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &row, &col);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(matrix, transposed, row, col);
    printf("Transposed matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}