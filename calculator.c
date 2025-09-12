#include <stdio.h>

int main() {
    int a;
    int b;
    int sum;
	int difference;
	int product;
	int qoutient;
    int result;

    printf("Enter 1st number: \n");
    scanf("%d", &a);

    printf("Enter 2nd number: \n");
    scanf("%d", &b);

    printf("Enter 1 for sum, 2 for difference, 3 for product, 4 for qoutient: \n");
    scanf("%d", &result);

    sum = a + b;
	difference = a - b;
	product = a * b;
	qoutient = a / b;

    switch (result) {
        case 1:
            printf("sum: %d \n", sum);
            break;
        case 2:
            printf("difference: %d \n", difference);
            break;
        case 3:
            printf("product: %d \n", product);
            break;
        case 4:
            printf("qoutient: %d \n", qoutient);
            break;
        default:
            printf("Enter numbers from 1 to 4 only \n");
    }

    return 0;
}