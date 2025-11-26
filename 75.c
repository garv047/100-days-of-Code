#include <stdio.h>
int main()
{
    int arrA[3][3] = {
        {4, 7, 11},
        {11, 16, 22},
        {22, 28, 32}};
    int arrB[3][3] = {
        {40, 44, 47},
        {47, 56, 64},
        {64, 70, 74}};
    int arrC[3][3];
    int i, j;
    printf("{\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            arrC[i][j] = (arrA[i][j] + arrB[i][j]);

            printf("%d,", arrC[i][j]);
        }
    }
    printf("\n}\n");
    return 0;
}