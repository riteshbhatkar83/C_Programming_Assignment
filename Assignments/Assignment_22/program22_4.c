// Accept number from user and display below pattern.
//
// Input  : 4
//
// Output : #   1   *   #   2   *   #   3   *   #   4   *

#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;
  
    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of element : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}