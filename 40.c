#include <stdio.h>
#include <string.h>
int main()
{
    char b[100], onesComp[100];
    int i, valid = 1;

    printf("Enter a binary number: ");
    scanf("%s", b);

    for (i = 0; i < strlen(b); i++)
    {
        if (b[i] == '0')
        {
            onesComp[i] = '1';
        }
        else if (b[i] == '1')
        {
            onesComp[i] = '0';
        }
        else
        {
            valid = 0;
            break;
        }
    }
    if (valid)
    {
        onesComp[i] = '\0';
        printf("Original Binary: %s\n", b);
        printf("1's Complement: %s\n", onesComp);
    }
    else
    {
        printf("Invalid binary number.\n");
    }
    return 0;
}