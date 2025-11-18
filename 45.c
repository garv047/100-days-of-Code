#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float num = 2 * i;
        float den = 4 * i - 1;
        sum += num / den;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}