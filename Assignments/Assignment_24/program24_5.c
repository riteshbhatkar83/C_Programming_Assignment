// 5. Write a program which accepts a string from user
// and reverse that string in place.
//
// Input  : abcd
// Output : dcba
//
// Input  : abba
// Output : abba

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char * str)
{   
    char *start = str;
    char *end = str;
    char temp ='\0';

     // Find last character
    while(*end != '\0')
    {
        end++;
    }
    end--;

     // Reverse the string
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string :\n");
    scanf("%[^\n]s",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}