#include <stdio.h>

int ISPRIME(int num)
{
    int i;
    if (num <= 1)
        return 0;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int upper, i;

    printf("Enter the upper limit of range: ");
    scanf("%d", &upper);

    printf("Prime numbers between 1 and %d are:\n", upper);
    for (i = 1; i <= upper; i++)
    {
        if (ISPRIME(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}