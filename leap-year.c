#include <stdio.h>
int main(){
    int g;
    printf("Enter the Year: \n");
    scanf("%d", &g);

if( g % 4 == 0)
    printf("Its a Leap Year \n");
else
    printf("Its not Leap Year \n");

    return 0;
}