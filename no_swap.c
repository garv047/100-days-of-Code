#include <stdio.h>

int main(int argc, char** argv[]) {
    int no1;
    int no2;
    int no3;

    printf("Enter two numbers: ");
    scanf("%d %d", &no1, &no2);

    printf("Before swapping: no1 = %d, no2 = %d  \n", no1, no2);

    no3 = no1;
    no1 = no2;
    no2 = no3;

    printf("After swapping: no1 = %d, no2 = %d  \n", no1, no2);

    return 0;
}