#include <stdio.h>
int main(){
    int g;
    printf("Enter Integer: \n");
    scanf("%d", &g);

if(g > 0)
    printf("Integer is POSITIVE \n");
else if(g < 0)
    printf("Integer is NEGATIVE \n");
else
    printf("Integer is ZERO \n");
return 0;
};