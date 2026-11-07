// Write a program which accepts a number from the user
// and displays the multiplication of its factors.
//
// Input  : 12
// Output : 144    (1 * 2 * 3 * 4 * 6)
//
// Input  : 13
// Output : 1      (1)
//
// Input  : 10
// Output : 10     (1 * 2 * 5)

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMuitF = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMuitF = iCnt * iMuitF;
        }
    }
    return iMuitF;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}