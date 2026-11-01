// Write a program which accepts a number from the user
// and displays the following pattern.
//
// Input  : 5
// Output : *  *  *  *  *  #  #  #  #  #
//
// Input  : 6
// Output : *  *  *  *  *  *  #  #  #  #  #  #
//
// Input  : -5
// Output : *  *  *  *  *  #  #  #  #  #
//
// Input  : 2
// Output : *  *  #  #

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iCnt2 = 0;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        
        printf("*  ");
    }
    for(iCnt2 = 1 ; iCnt2 <= iNo; iCnt2++)
    {
        
        printf("#  ");
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}