// Write a program to find the factorial of a given number.
//
// Input  : 5
// Output : 120  (5 * 4 * 3 * 2 * 1)
//
// Input  : -5
// Output : 120  (5 * 4 * 3 * 2 * 1)
//
// Input  : 4
// Output : 24   (4 * 3 * 2 * 1)

#include<stdio.h>
#include<stdlib.h>


void factorial(int iNo)
{
    int iCnt = 0;
    int iMtp = 1;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iMtp = iMtp * iCnt;
    }
    printf("%d  ",iMtp);
    printf("(");
    for(iCnt = iNo ; iCnt >= 2; iCnt--)
    {
        printf("%d * ",iCnt);
    }
    printf("1)\n");
}
int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    factorial(iValue);

    return 0;
}
