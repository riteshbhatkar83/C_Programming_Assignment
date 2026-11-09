// Write a program which accepts one number from the user
// and checks whether that number is greater than 100 or not.
//
// Input  : 101
// Output : Greater
//
// Input  : 39
// Output : Smaller

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChKGreater(int iNo)
{
    if(iNo > 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number :");
    scanf("%d",&iValue);

    bRet = ChKGreater(iValue);
    if(bRet == 1)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}