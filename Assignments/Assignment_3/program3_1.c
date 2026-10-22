// Q1. Write a program to print the first N even numbers.
// Example: Input: 7 → Output: 2 4 6 8 10 12 14

#include<stdio.h>
#include<stdlib.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    else
    {   
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <= iNo*2 ; iCnt++)
        {
            if(iCnt % 2 == 0 )
            {
                printf("%d ",iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return EXIT_SUCCESS;
}