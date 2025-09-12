#include <stdio.h>

int main() {
    int m;

    printf("Enter a number from 1-12 to display the month: \n");
    scanf("%d", &m);

    switch (m) {
        case 1:
            printf("january - 31 \n");
            break;
        case 2:
            printf("february - 28 \n");
            break;
        case 3:
            printf("march - 31 \n");
            break;
        case 4:
            printf("april - 30 \n");
            break;
        case 5:
            printf("may - 31 \n");
            break;
        case 6:
            printf("june - 30 \n");
            break;
        case 7:
            printf("july - 31 \n");
            break;
        case 8:
            printf("august - 31 \n");
            break;
        case 9:
            printf("september - 30 \n");
            break;
        case 10:
            printf("october - 31 \n");
            break;
        case 11:
            printf("november - 30 \n");
            break;
        case 12:
            printf("december - 31 \n");        
            break;
        default:
            printf("Please enter a number between 1 and 12 only. \n");
    }

    return 0;
}