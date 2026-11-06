// Write a program which accepts a number from the user
// and counts the frequency of such digits which are less than 6.
//
// Input  : 2395
// Output : 3
//
// Input  : 1018
// Output : 3
//
// Input  : 9440
// Output : 3
//
// Input  : 96672
// Output : 1

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);
    

    return 0;
}