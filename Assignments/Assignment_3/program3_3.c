//Q3. Write a program which accepts a number from the user and prints all even factors of that number.
// INPUT : 36
// 2  6  12  18
#include<stdio.h>
#include<stdlib.h>

void DisplayevenFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo ; i++)
    {
        
        if( (iNo % i == 0) && (i % 2 == 0) && (i != 4))
        {
            printf("%d ", i);

        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayevenFactor(iValue);
    return EXIT_SUCCESS;
}