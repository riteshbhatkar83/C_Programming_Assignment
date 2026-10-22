// 5 – Calculate Employee Bonus
//
// Problem Statement: Accept an employee's monthly salary and completed years of service.
// Calculate the bonus using these rules:
// More than 10 years of service earns 15% of monthly salary.
// 5 to 10 years earns 10%.
// Less than 5 years earns 5%.
// Salary must be positive and years of service cannot be negative.
//
// Expected Output:
//
// Input: 30000 12 -> Bonus = 4500.00
// Input: 20000 7  -> Bonus = 2000.00
// Input: 10000 2  -> Bonus = 500.00


#include <stdio.h>
#include <stdlib.h>

void CalculateBouns(float fSalary, int iYears)
{
    float fBonusPer = 0.0f;

    if((fSalary < 0 ) || ( iYears < 0))
    {
        printf("Invalid input");
    }
    else if(iYears > 10)
    {
        fBonusPer = 15;
    }
    else if((iYears > 5) && (iYears <= 10))
    {
        fBonusPer = 10;
    }
    else if(iYears <= 5)
    {
        fBonusPer = 5;
    }
    else
    {
        printf("Sorry! No Bonus for you..");
    }

    float totalBonus = ((fSalary * fBonusPer)/100);

    printf("Bonus = %.2f",totalBonus);
}

int main()
{   
    float fSalary =0.0f;
    int iYears  = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBouns(fSalary,iYears);
    return EXIT_SUCCESS;
}