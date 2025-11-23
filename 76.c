#include <stdio.h> 
int isSymmetric(int matrix[3][3], int size);   
int main() {
    int matrix[3][3];
    int size, i, j; 
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }  
    if (isSymmetric(matrix, size)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}