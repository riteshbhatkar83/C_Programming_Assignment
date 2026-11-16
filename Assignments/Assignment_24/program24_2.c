// 2. Write a program which accepts a string from user
// and accepts one character. Return frequency of that character.
//
// Input  : Marvellous Multi OS
//          M
// Output : 2
//
// Input  : Marvellous Multi OS
//          W
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int CountChar(char * str , char character)
{   
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == character)
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
    char arr[100];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character : \n");
    scanf(" %c",&ch);//The leading space skips leftover whitespace (like the Enter key pressed after entering the string).

    iRet = CountChar(arr,ch);


    printf("frequency of that character :%d ",iRet);

    return 0;
}