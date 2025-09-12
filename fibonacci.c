#include <stdio.h>

int main() {
    int g, a = 0, b = 1, h,count = 0;
    printf("Enter the value for Fibonacci series: %d\n", g);
    scanf("%d", &g);
    printf("Fibonacci series for given value: \n");

    if(g >=1){
        printf("%d \n", g);
    }
    while (count < g){
        h = a + b;
        printf("%d \n", h);
        a = b;
        b = h;
        count++;
    }
    return 0;
}