//Q5. Accept one number from the user and print that number of * on the screen.

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCut = 0;

    for(iCut = 1 ; iCut <= iNo ; iCut++)
    {
        printf("*");
    }
}

int main()
{   
    int iValue = 0;

    iValue = 5;

    Accept(iValue);
    

    return EXIT_SUCCESS;
}