// Write a program which accepts a number from the user
// and prints numbers from 1 to that number.
//
// Input  : 8
// Output : 1  2  3  4  5  6  7  8

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int Cnt = 0;

    for(Cnt = 1; Cnt <= iNo; Cnt++)
    {
        printf("%d\t",Cnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");

    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}