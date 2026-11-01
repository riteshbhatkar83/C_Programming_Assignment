// Write a program which accepts a number from the user.
// If the number is less than 50, print "Small".
// If the number is greater than or equal to 50 and less than 100,print "Medium".
// If the number is greater than or equal to 100, print "Large".
//
// Input  : 75
// Output : Medium

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo < 100)   //(iNo >= 50)  && (iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");

    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}