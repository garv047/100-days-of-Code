#include <stdio.h>
int main(int argc, char ** argv){
    int a, b, c;
    printf("Enter side of triangle \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
    printf("Triangle is Equilateral \n");
    else if(a == b || b == c || a == c )
    printf("Triangle is Isosceles \n");
    else 
    printf("Triangle is Scalene \n");

    return 0;
}