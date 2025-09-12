#include <stdio.h>
int main()
{
    int i, n;
    printf("How many rows you want?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 4 == 1)
        {
            printf("*\n");
        }
        else if (i % 4 == 2)
        {
            printf("**\n");
        }
        else if (i % 4 == 3)
        {
            printf("***\n");
        }
        else
        {
            printf("**\n");
        }
    }
}