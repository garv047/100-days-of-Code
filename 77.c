#include <stdio.h>
#define MAX 10  
int main() {
    int matrix[MAX][MAX], n, i, j, flag = 0;

    printf("Enter the size of the square matrix (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (flag) {
        printf("The diagonal elements are not distinct.\n");
    } else {
        printf("The diagonal elements are distinct.\n");
    }

    return 0;
}