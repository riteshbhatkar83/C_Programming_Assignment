// 2 – Check Leap Year
// Problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than or equal to zero invalid.

// Expected Output:
// - Input: 2024 → Leap Year
// - Input: 1900 → Not a Leap Year
// - Input: 2000 → Leap Year 

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYears)
{   
    if(iYears < 0 )
    {
        ptintf("invalid");
    }
    else if(iYears % 4 == 0)
    {
        printf("Lear year");
    }
    else if(iYears% 400 == 0)
    {
        printf("Leaf Year");
    }
    else if(iYears % 100 == 0 )
    {
        printf( " not a leaf Year");
    }
    else
    {
        printf("Not valid");
    }
}

int main()
{   
    int iYears = 0;

    printf ("Enter Year : \n");
    scanf("%d", &iYears);

    CheckLeapYear(iYears);
    return EXIT_SUCCESS;
}

//para = argu same