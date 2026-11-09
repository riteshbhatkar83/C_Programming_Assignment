// Write a program which accepts three numbers from the user
// and prints their multiplication.
//
// Input  : 5  4  7
// Output : 140
//
// Input  : 5  0  7
// Output : 35
//
// Input  : 5  0  0
// Output : 5
//
// Input  : 0  0  0
// Output : 0

#include <stdio.h>

int Multthree(int iNo1 ,int iNo2, int iNo3)
{
    int Mult = 1;

    if(iNo1 != 0)
    {
        Mult = Mult * iNo1;
    }
    if(iNo2 != 0)
    {
        Mult = Mult * iNo2;
    }
    if(iNo3 != 0)
    {
        Mult = Mult * iNo3;
    }
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    return Mult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three Number : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multthree(iValue1,iValue2,iValue3);

    printf("%d",iRet);
    return 0;
}