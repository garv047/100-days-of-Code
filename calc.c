#include <stdio.h>

int main(int argc, char** argv[]){

	int a;
	int b;
	int sum;
	int difference;
	int product;
	int qoutient;

	printf("first number: \n");
	scanf("%d", &a);

	printf("second number: \n");
	scanf("%d", &b);

	sum = a + b;
	difference = a - b;
	product = a * b;
	qoutient = a / b;

	printf("sum: %d \n", sum);
	printf(" difference: %d \n", difference);
	printf(" product: %d \n", product);
	printf(" qoutient: %d \n", qoutient);

	return 0;
};
