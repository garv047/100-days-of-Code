#include <stdio.h>

void fxn(){
    static int var = 47;
    var *= 74;
    var++;
    printf("satatic variable : %d\n", var);
}
int main(){
    fxn();
    fxn();
    return 0;
}