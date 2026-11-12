// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 4
//
// Output : 1   2   3   4
//              2   3   4
//                  3   4
//                      4

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1; i <= iRow ; i++ )
    {
        for(j = 1,iCnt = 1; j <= iCol ; j++)
        {   
             if(i > j)
             {
                printf(" \t");
             }
             else
             {
                printf("%d\t",iCnt);
             }
              iCnt++;
        }
        printf("\n\n");
    }
}

int main()
{   
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of iRows and Cols : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}