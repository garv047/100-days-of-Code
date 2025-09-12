#include <stdio.h>

int main() {
    float prcnt;
    char grade;

    printf("Enter your prcnt (0-100): \n");
    scanf("%f", &prcnt);

    if (prcnt < 0 || prcnt > 100) {
        printf("Invalid prcnt! Please enter a value between 0 and 100.\n");
        return 1;
    }

    if (prcnt >= 90) {
        grade = 'A';
    } else if (prcnt >= 80) {
        grade = 'B';
    } else if (prcnt >= 70) {
        grade = 'C';
    } else if (prcnt >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Your grade is: %c \n", grade);

    return 0;
}