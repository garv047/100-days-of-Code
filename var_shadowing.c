#include <stdio.h>

int main(){
    int g = 7;
    printf("global variable: %d \n", g);

    if (1){
        int g = 4;
        printf("local variable: %d \n", g);
    }
    printf("global variable over local variable: %d \n", g);
    return 0;
}