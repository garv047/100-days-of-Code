#include <stdio.h>

int main() {
      int number;

        printf("number: \n");
        scanf("%d", &number);
        
    if (number % 3 == 0) {
        printf("%d divisible by 3 .\n", number);
    } else {
        printf("%d not divisible by 3.\n", number);
    }
    if (number % 5 == 0) {
        printf("%d divisible by 5 .\n", number);
    } else {
        printf("%d not divisible by 5.\n", number);
    }

    return 0;
}

