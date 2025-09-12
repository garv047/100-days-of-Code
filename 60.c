#include <stdio.h>

int main()
{
    int n, i;
    int pos = 0;
    int neg = 0;
    int zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d  ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            neg++;
        }
    }

    printf("\nIn the ARRAY\n\tPositive: %d\tNegative: %d\tZero: %d\n", pos, neg, zero);
}