// Write a program which accepts a number from the user
// and prints numbers in a number line.
//
// Input  : 4
// Output : -4  -3  -2  -1  0  1  2  3  4

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int Cnt = 0;

    for(Cnt = -iNo ; Cnt <= iNo ; Cnt++)
    {
        printf("%d  ",Cnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");

    scanf("%d",&iValue);

    Display(iValue);
}