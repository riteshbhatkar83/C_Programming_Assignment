// 4. Write a program which accepts a string from user
// and accepts one character. Return index of last occurrence
// of that character.
//
// Input  : Marvellous Multi OS
//          M
// Output : 11
//
// Input  : Marvellous Multi OS
//          W
// Output : -1
//
// Input  : Marvellous Multi OS
//          e
// Output : 4

#include<stdio.h>
#include<stdlib.h>

int LastChar(char * str, char character)
{
    int OccIndex = -1, Index = -1;
    while(*str != '\0')
    {   
        Index++;
        if(*str == character)
        {
            OccIndex = Index ;
        }
        *str++;
    }
    return OccIndex;
}

int main()
{
    char arr[100];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^\n]s",arr);

    printf("Enter character :\n");
    scanf(" %c",&ch);

    iRet = LastChar(arr,ch);

    printf("Character location is %d\n",iRet);

    return 0;
}