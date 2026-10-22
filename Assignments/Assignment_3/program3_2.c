//Q2. write a program which accept number from user and print even factor of that numbers;
// Then the output for 24 will be:
// 1 2  4  6  8  12

#include<stdio.h>
#include<stdlib.h>

void DisplayevenFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("1 ");
    int i = 0;
    for(i = 1 ; i < iNo ; i++)
    {
        if( iNo % i == 0)
        {
                if(i % 2 == 0)
                {
                    printf("%d ", i);
                }
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

