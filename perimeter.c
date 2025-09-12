#include <stdio.h>

int main(int argc, char** aargv){

        int l;
        int b;
        int perimeter;
	int area;

        printf("Enter Length: \n");
        scanf("%d", &l);

        printf("Enter Breath: \n");
        scanf("%d", &b);

        perimeter = (2 * (l + b));
	area = l * b;

        printf("The Perimeter is: %d \n", perimeter);
	printf("The Area is: %d \n", area);

        return 0;

};
