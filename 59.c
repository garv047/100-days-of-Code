#include <stdio.h>

int main()
{
    int n, i;
    int o = 0;
    int e = 0;

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
        if (arr[i]%2 == 0 ){
            e++;
        }
        else {
            o++;
        }
    }

    printf("\nIn the ARRAY\n\tOdd: %d\tEven: %d\n", o, e);
}