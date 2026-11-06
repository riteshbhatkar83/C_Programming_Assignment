// Write a program which accepts a range from the user
// and returns addition of all numbers between that range.
// (Range should contain positive numbers only.)
//And addition including starting and ending point
//
// Input  : 23 30
// Output : 212
//
// Input  : 10 18
// Output : 126
//
// Input  : -10 2
// Output : Invalid range
//
// Input  : 90 18
// Output : Invalid range


#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    if(iStart < iEnd)
    {
        int iCnt = 0;
        int iSum = 0;

        if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
        {
            return -1;
        }
        else
        {
            for(iCnt = iStart + 1 ; iCnt < iEnd ; iCnt++)
        {
            iSum = iCnt + iSum;
        }
        return iSum;
        }
        
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Starting point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }
    

    return 0;
}