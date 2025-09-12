#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d  ", arr[i]);
    }

    int large = arr[0];
    int s_large = -7777777;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            s_large = large;
            large = arr[i];
        }
        else if (arr[i] > s_large && arr[i] != large)
        {
            s_large = arr[i];
        }
    }

    if (s_large == -7777777)
        printf("\nThere is no second largest element.\n");
    else
        printf("\nThe second largest element is: %d\n", s_large);

    return 0;
}