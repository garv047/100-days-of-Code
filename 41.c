#include <stdio.h>
#include <string.h>
int main()
{
    char n[100], new[100];
    int i;

    printf("Enter the number: ");
    scanf("%s", n);

    for (i = 0; i < strlen(n); i++)
    {
        if (i == 0)
        {
            n[i] = new[(strlen(n) - 1)];
        }
        else if (i == (strlen(n) - 1))
        {
            n[i] = new[0];
        }
        else
        {
            n[i] = new[i];
        }
    }

    printf("Initial number: %s\nFinal number: %s\n", n, new);

    return 0;
}