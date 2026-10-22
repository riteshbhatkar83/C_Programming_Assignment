// 5 – Check Divisibility by 5
// Problem Statement: Accept an integer and determine whether it is divisible by 5 without leaving any remainder.

// Expected Output:
// - Input: 45 → Divisible by 5
// - Input: 23 → Not Divisible by 5 

#include<stdio.h>
#include<stdlib.h>

void CheckdDivisiblity(int iNo)
{
    if(iNo % 5 == 0 )
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");

    }
}


int main()
{   
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckdDivisiblity(iValue);

    return EXIT_SUCCESS;
}