//Q4. Accept two numbers from the user and display the first number the second number of times.

// Example outputs
// Input: 12 5
// 12 12 12 12 12

#include<stdio.h>

void Display(int iNo ,int iFrequency)
{
    int iCnt = 0;
    //updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{   
    int iValue = 0, iCount = 0;

    printf("Enter First No : \n");
    scanf("%d",&iValue);

    printf("Enter Second No : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
