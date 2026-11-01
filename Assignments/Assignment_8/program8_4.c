
// Write a program which accepts a number from the user
// and displays its multiplication table.
//
// Input  : 2
// Output : 2  4  6  8  10  12  14  16  18  20
//
// Input  : 5
// Output : 5  10  15  20  25  30  35  40  45  50
//
// Input  : -5
// Output : 5  10  15  20  25  30  35  40  45  50

#include<stdio.h>
#include<stdlib.h>


void MultTable(int iNo)
{
    int iCnt = 0;
    int iMtp = iNo;

    if(iNo < 0)
      {
          iNo = -iNo;
      }

    for(iCnt = 1 ; iCnt <= 10; iCnt++)
    {
        // iMtp = iCnt * iMtp;
        printf("%d\t",iCnt * iMtp);
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    MultTable(iValue);

    return 0;
}
