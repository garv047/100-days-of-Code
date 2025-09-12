#include <stdio.h>

int main()
{
    int num, d, p = 1, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        d = num % 10;
        if (d % 2 != 0)
        {
            p *= d;
            odd = 1;
        }
        num /= 10;
    }

    if (odd)
    {
        printf("Product of odd digits: %d\n", p);
    }
    else
    {
        printf("There are no odd digits.\n");
    }

    return 0;
}