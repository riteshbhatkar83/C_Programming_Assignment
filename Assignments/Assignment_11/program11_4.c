// Write a program which accepts a range from the user
// and returns addition of all even numbers between that range (including border).
// (Range should contain positive numbers only.and include border)
//
// Input  : 23 30
// Output : 108
//
// Input  : 10 18
// Output : 70
//
// Input  : -10 2
// Output : Invalid range
//
// Input  : 90 18
// Output : Invalid range


#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{   
    int iCnt = 0;
    int iSum = 0;

    if((iStart > iEnd) || (iStart <= 0) || (iEnd <= 0))
    {
        return -1;
    }
    else
    {   
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum  = iSum + iCnt;
            }
        }
        return iSum;  
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    

    return 0;
}