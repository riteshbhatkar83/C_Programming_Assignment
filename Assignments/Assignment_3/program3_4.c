// Q4. Accept one character from the user and convert the case of that character.

// Input: a
// Output: A

// Input: D
// Output: d

#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

void DisplayConvert(char Cvalue)
{
    if(Cvalue >= 'a' && Cvalue <= 'z')
    {
        printf("%c\n",toupper(Cvalue));
    }
    else if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        printf("%c\n",tolower(Cvalue));
    }
    else
    {
        printf("not valid input");
    }
}
int main()
{
    char cValue  = '\0';

    printf("Enter character\n");

    scanf(" %c",&cValue);

    DisplayConvert(cValue);
    return EXIT_SUCCESS;
}