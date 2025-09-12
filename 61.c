#include <stdio.h>

int main()
{
    int n, i;
    int g;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you wanna search:");
    scanf("%d", &g);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == g)
        {
            printf("%d\n", g);
        }
    }
    return 0;
}