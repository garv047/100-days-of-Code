#include <stdio.h>

int main() {
    char g;

    printf("Enter a character: ");
    scanf("%c", &g);

    if ((g == 'a' || g == 'e' || g == 'i' || g == 'o' || g == 'u') || 
        (g == 'A' || g == 'E' || g == 'I' || g == 'O' || g == 'U')) {
        printf("%c is a Vowel. \n", g);
    } else if ((g >= 'a' && g <= 'z') || (g >= 'A' && g <= 'Z')) {
        printf("%c is a Consonant. \n", g);
    } else {
        printf("%c is not an Alphabet. \n", g);
    }

    return 0;
}
