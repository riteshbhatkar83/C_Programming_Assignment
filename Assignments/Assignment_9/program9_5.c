
// Write a program which returns the difference between
// even factorial and odd factorial of a given number.
//
// Input  : 5
// Output : -7    (8 - 15)
//
// Input  : -5
// Output : -7    (8 - 15)
//
// Input  : 10
// Output : 2895  (3840 - 945)

#include<stdio.h>
#include<stdlib.h>

int EvenOddFactorial(int iNo)
{
   int iCnt = 0;
   int iEvenFact = 1;
   int iOddFact  = 1;

   if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt <= iNo ; iCnt = iCnt + 2 )
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt = 3; iCnt <= iNo ;  iCnt = iCnt + 2  )
    {
        iOddFact = iOddFact * iCnt;
    }
   return iEvenFact - iOddFact;
}



int main()
{   
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet = EvenOddFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}