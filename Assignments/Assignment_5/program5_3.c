// 3. Calculate Student Grade
//
// Problem Statement:
// Accept the marks of a student out of 100 and display the grade
// according to the following criteria. Marks outside 0–100 are invalid.
//
// Marks       Grade
// 90–100      A
// 75–89       B
// 60–74       C
// 40–59       D
// Below 40    Fail
//
// Expected Output:
// Input: 85  -> Grade B
// Input: 35  -> Fail
// Input: 105 -> Invalid Marks

#include<stdio.h>
#include<stdlib.h>

void DispalyGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(fMarks >= 90)
    {
        printf("A Grade");
    }
    else if(fMarks >=75)
    {
        printf("B Grade");

    }
    else if(fMarks >=60)
    {
        printf("C Grade");

    }
    else if(fMarks >=40)
    {
        printf("D Grade");

    }
    else
    {
        printf("Fail");

    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f", &fMarks);

    DispalyGrade(fMarks);

    return EXIT_SUCCESS;
}