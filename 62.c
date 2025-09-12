#include <stdio.h>

int main()
{
    int arr[10];
    int i, n;

    printf("Total Number of Elements:\n");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Numbers in reverse order:\n");
    for (i = (n - 1); i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}