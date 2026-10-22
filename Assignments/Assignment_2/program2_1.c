//Q1. Accept one number from the user and print that number of * on the screen.

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("* ");
        iCnt++;
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
//Uses a separate counter variable.