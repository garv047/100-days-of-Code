#include <stdio.h>
int main(void) {
    printf("For loop:\n");
    for (int i = 0; i < 5; i++) printf("%d ", i);

    printf("\nWhile loop:\n");
    int j = 0;
    while (j < 5) { printf("%d ", j); j++; }

    printf("\nDo-while loop:\n");
    int k = 0;
    do { printf("%d ", k); k++; } while (k < 5);

    return 0;
}
