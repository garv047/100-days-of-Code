#include <stdio.h>

int main() {
    int garv; 

    do {
        printf("Enter a number (enter 0 to stop): "); 
        scanf("%d", &garv); 

    } while (garv != 0); 
 
    return 0;
}