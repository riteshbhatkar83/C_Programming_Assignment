// Write a program which accepts total marks and obtained marks
// from the user and calculates the percentage.
//
// Input  : 1000  745
// Output : 74.5%

#include <stdio.h>

float CalPer(int iNo1 ,int iNo2)
{
    float Ans = 0.0f;

    Ans = ((float)iNo2/(float)iNo1) * 100;

    return Ans;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iRet = 0.0f;

    printf("Enter total Marks : ");
    scanf("%d",&iValue1);

    printf("Enter Marks Obtain : ");
    scanf("%d",&iValue2);

    iRet = CalPer(iValue1,iValue2);

    printf("%.1f%%",iRet);
    return 0;
}