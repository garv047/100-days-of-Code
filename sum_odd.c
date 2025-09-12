#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1, count = 0; count < n; i += 2) {
        sum += i;
        count++;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}