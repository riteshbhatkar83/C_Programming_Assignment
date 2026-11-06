// Write a program which accepts a range from the user
// and displays all even numbers between that range.
//
//Don`t include the starting and ending point
//if starting = ending check condition and print
//
// Input  : 23 35
// Output : 24 26 28 30 32 34
//
// Input  : 10 18
// Output : 12 14 16 
//
// Input  : 10 10
// Output : 10
//
// Input  : -10 2
// Output : -8 -6 -4 -2 0 
//
// Input  : 90 18
// Output : Invalid range

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{   
    if(iStart <= iEnd)
    {   
        int iCnt = 0;
        
        for(iCnt = iStart + 1; iCnt < iEnd ; iCnt++ )
        {
            if( iCnt % 2 == 0)
            {
                printf("%d  ",iCnt);
            }
        }
        if((iStart == iEnd) && (iStart % 2 == 0))
        {
            printf("%d",iStart);
        }

    }
    else
    {
        printf("Invaid Range \n");
        return;
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 ,iValue2);
}