// Accept number from user and display below pattern.
//
// Input  : 8
//
// Output : 2   4   6   8   10   12   14   16


#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int i = 0;
  
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",i*2);
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