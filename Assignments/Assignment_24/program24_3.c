// 3. Write a program which accepts a string from user
// and accepts one character. Return index of first occurrence
// of that character.
//
// Input  : Marvellous Multi OS
//          M
// Output : 0
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

int FirstOccIndex(char * str ,char character)
{
    int iCntIndex = 0;

    while(*str != '\0')
    {
        if(*str == character)
        {
            return iCntIndex;
        }
        *str++;
        iCntIndex++;
    }
    return -1;
}

int main()
{
    char arr[100];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]s",arr);

    printf("Enter character : \n");
    scanf(" %c",&ch);

    iRet = FirstOccIndex(arr,ch);

    printf("index of first occurrence :%d",iRet);

    return 0;
}