// Q5. Accept one character from the user and check whether that character is a vowel
// (a, e, i, o, u) or not.

// Input: E
// Output: TRUE

// Input: d
// Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

bool ChkVowel(char Cvalue)
{

    Cvalue = tolower(Cvalue);

    if(Cvalue == 'a' || Cvalue == 'e' ||
   Cvalue == 'i' || Cvalue == 'o' ||
   Cvalue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Vowel");
    }
    else
    {
        printf("not vowel");
    }
}