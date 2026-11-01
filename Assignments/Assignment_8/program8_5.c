
// Write a program which accepts a number from the user
// and displays its multiplication table in reverse order.
//
// Input  : 2
// Output : 20  18  16  14  12  10  8  6  4  2
//
// Input  : 5
// Output : 50  45  40  35  30  25  20  15  10  5
//
// Input  : -5
// Output : 50  45  40  35  30  25  20  15  10  5


#include<stdio.h>
#include<stdlib.h>


int MultTable(int iNo)
{
    int iCnt = 0;
    int iMtp = iNo;

    for(iCnt = 10 ; iCnt >= 1; iCnt--)
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
