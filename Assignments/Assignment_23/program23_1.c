// Write a program which accepts a string from the user
// and converts it into lowercase.
//
// Input  : Marvellous Multi OS
// Output : marvellous multi os

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90 )
        {
            *str = *str + 32;
        }
        printf("%c",*str);
        *str++;
    }

}

int main()
{      

    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s \n",arr);

    return 0;
}