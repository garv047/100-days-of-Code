#include <stdio.h>

int main()
{
    int sum = 0;
    int n;
    int arr[n];

    printf("Enter the length of array:\n");
    scanf("%d", &n);

    printf("Enter n integers:\n");
    for (int a = 0; a < n; a++)
    {
        scanf("%d", &arr[a]);
        sum += arr[a];
    }
    printf("For index: %d\tsum: %d\n", n, sum);
    return 0;
}