#include <stdio.h>
int main()
{
    int n;
    int arr[n];

    printf("Enter the length of array:\n");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int a = 0; a < n; a++)
    {
        scanf("%d", &arr[a]);
    }
    for(int a = 0; a < n; a++)
    {
        printf("%d", &arr[a]);
    }
}