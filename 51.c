#include <stdio.h>

int main()
{
    int rows;

    printf("How many rows you wanna print? ");
    scanf("%d", &rows);

    for (int i = rows; i > 0; i--)
    {
        for (int j = rows; j > 0; j--)
        {
            printf(" ");
             for (int k = rows; k > 0; k--)
            {
            printf("%d", k);
            }
        printf("\n");
        }
        return 0;
    }
}