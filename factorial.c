#include <stdio.h>

void printFactorial(int n) {
    if (n < 0) {
        printf("Entered number is negative. \n");
        return;
    }
    long long g = 1; 
    for (int i = 1; i <= n; i++) {
        g *= i;
    }
    printf("The factorial of %d is: %lld\n", n, g);
}

int main() {
    int gb;
    printf("Enter a positive integer: ");
    scanf("%d", &gb);
    printFactorial(gb);
    return 0;
}