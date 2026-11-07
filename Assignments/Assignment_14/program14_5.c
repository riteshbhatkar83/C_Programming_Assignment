// Write a program which accepts a number from the user
// and returns the difference between summation of all
// its factors and non-factors.
//
//we dont include here the number itself as a factor 
//
// Input  : 12
// Output : -34    (16 - 50)
//
// Input  : 10
// Output : -29    (8 - 37)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iFactNomSum = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iFactNomSum = iFactNomSum + iCnt;
        }
    }

    return iFactSum - iFactNomSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}