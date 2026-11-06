// Write a program which accepts a number from the user
// and checks whether it contains 0 or not.
//
// Input  : 2395
// Output : There is no Zero
//
// Input  : 1018
// Output : It Contains Zero
//
// Input  : 9000
// Output : It Contains Zero
//
// Input  : 10687
// Output : It Contains Zero

#include <stdio.h>
#include <stdlib.h>

#define true 1     //It means whenever the compiler sees TRUE, it replaces it with 1.
#define false 0     //Whenever the compiler sees FALSE, it replaces it with 0.

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo = iNo / 10;
    }

    return 0;

}



int main()
{   
    int iValue = 0;
    BOOL bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return EXIT_SUCCESS;
}