#include <stdio.h>

void calculateFine(int units) {
    int bill = 0;

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        return;
    }

    printf("Total Fine: ₹%d\n", bill);
}

int main() {
    int units;
    printf("Enter the number of units used: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Please enter positive number of units used.\n");
    } else {
        calculateFine(units);
    }

    return 0;
}