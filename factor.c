#include <stdio.h>

int main(){
    int i;
    int n;
    printf("Number for which you want to find Factors? %d \n", n);
    scanf("%d", &n);
    printf("\nFactors of %d are:-\n", n);
    for (i = 1; (n%i == 0); i++){
        printf("%d\n",i);
    }
    return 0;
}