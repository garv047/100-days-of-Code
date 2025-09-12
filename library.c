#include <stdio.h>

void calculateFine(int lateDays) {
    int fine = 0;

    if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
        return;
    }

    printf("Total Fine: ₹%d\n", fine);
}

int main() {
    int lateDays;

    printf("Enter the late days: ");
    scanf("%d", &lateDays);

    if (lateDays < 0) {
        printf("Enter positive numbers of days.\n");
    } else {
        calculateFine(lateDays);
    }

    return 0;
}