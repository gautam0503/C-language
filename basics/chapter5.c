#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Press any key:\n");
    character = getchar();

    if (isalpha(character) > 0)  
        printf("The character is a letter.\n");
    else if (isdigit(character) > 0)   
        printf("The character is a digit.\n");
    else
        printf("The character is not alphanumeric.\n");
        getchar();
 char alphabet;

    printf("Enter an alphabet: ");

    alphabet = getchar();

    if (islower(alphabet))
        printf("%c",(toupper(alphabet)));  
    else
        putchar(tolower(alphabet));

char address[80];
printf("enter address\n");
getchar();
scanf("%[a-z]",address);//scanf("%[^\n]",address);=>reads until new line
printf("%-80s\n",address);
    return 0;
}
