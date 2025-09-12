#include <stdio.h>

int main()
{
    int rows;
    printf("How many rows you wanna print? ");
    scanf("%d", &rows);

    for (int i = rows; i <= 1; i++)
    {
        for (int j = i; j <= 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}