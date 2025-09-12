#include <stdio.h>

int main(int argc, char** argv) {
    int a;
    int b;
    int c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("The largest number among them is: %d\n", a);
    } 
    else if (b > a && b > c) {
        printf("The largest number among them is: %d\n", b);
    } 
    else {
        printf("The largest number among them is: %d\n", c);
    }

    return 0;
}