#include <stdio.h>

int main() {
    int five = 5; 
    int i;

    printf("Table of %d: \n", five);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", five, i, (five * i));
    }

    return 0;
}