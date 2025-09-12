#include <stdio.h>

int main(int argc, char** argv) {
    int a;
    int b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b ) {
        printf("The largest number among them is: %d\n", a);
    } 
    
    else {
        printf("The largest number among them is: %d\n", b);
    }

    return 0;
}