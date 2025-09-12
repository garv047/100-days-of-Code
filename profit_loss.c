#include <stdio.h>
int main(){
    int cp, sp, p, l;
    printf("Enter Cost Price: \n");
    scanf("%d", &cp);
    printf("Enter Selling Price: \n");
    scanf("%d", &sp);
    
    if(sp > cp){
        p = sp - cp;
        printf("Profit: %d\n", p);
    }
    else if(cp > sp){
        l = cp - sp;
        printf("Loss: %d\n", l);
    }
    else{
        printf("No Profit No Loss \n");
    }
    
    return 0;
}