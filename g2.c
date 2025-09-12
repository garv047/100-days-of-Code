#include <stdio.h>
int main()
{
    int i, n;
    printf("How many rows you want?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("*******\n");
        }
        else
        {
            printf("\t*******\n");
        }
    }
}