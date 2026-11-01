
// Accept an amount in US dollars and return its corresponding
// value in Indian currency.
// Consider 1 dollar = 70 rupees.
//
// Input  : 10
// Output : 700
//
// Input  : 3
// Output : 210
//
// Input  : 1200
// Output : 84000

#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int iNo)
{
    int Ans = iNo * 70;
    return Ans;
}



int main()
{   
    int iValue = 0;

    printf("Enter Number of USD: \n ");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}