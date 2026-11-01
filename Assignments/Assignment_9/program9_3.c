// Write a program to find the even factorial of a given number.
//
// Input  : 5
// Output : 8  (4 * 2)
//
// Input  : -5
// Output : 8  (4 * 2)
//
// Input  : 10
// Output : 3840  (10 * 8 * 6 * 4 * 2)

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iMul = 1;

   if(iNo < 0)
    {
        iNo = -iNo;
    }
   for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
        if((iCnt % 2 == 0))
        {
            iMul = iCnt * iMul;
        }
   }
   return iMul;
}



int main()
{   
    int iValue = 0;

    printf("Enter Number \n ");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}