#include <stdio.h>
int main() {
    
    int rows;

    printf("Row in which you want maximum number of stars: ");
    scanf("%d", &rows);

    for (int i = 0; i < 2 * rows - 1; i++)
    {

        int comp;
        if (i < rows)
            comp = 2 * (rows - i) - 1;
        else
            comp = 2 * (i - rows + 1) + 1;

        for (int k = 0; k < 2 * rows - comp; k++)
            printf("*\n");
        printf("\n");
    }

    return 0;
}
