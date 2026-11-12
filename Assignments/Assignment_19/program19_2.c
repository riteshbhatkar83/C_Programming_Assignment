// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 4
//
// Output : *   *   *   *
//          *   *   *
//          *   *
//          *


#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(i = 1; i <= iRow; i++)
    {
        for (j = 1 ; j <= iCol - i + 1 ; j++)
        {
            
           printf("*\t"); 
        }
        printf("\n\n")
        
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Numbers of Rows and Col :");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}