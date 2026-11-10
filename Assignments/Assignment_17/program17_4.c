// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 5
//          iCol = 5
//
// Output :  1   2   3   4   5
//          -1  -2  -3  -4  -5
//           1   2   3   4   5
//          -1  -2  -3  -4  -5
//           1   2   3   4   5

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
   int i = 0;
   int j = 0;
    int iCnt = 0;

    for(i = 1 ; i <= iRow ;i++)
    {   
        if(i % 2 != 0)
        {
            iCnt = 1;
        }
        else
        {
            iCnt = -1;
        }
        for(j = 1 ; j <= iCol ; j++)
        {
            if( i % 2 != 0)
            {
                printf("%d\t",iCnt);
                iCnt++;
            }
            else
            {
                printf("%d\t",iCnt);
                iCnt--;
            }
        }
        printf("\n\n");
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter NUmber of Rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);
    return 0;
}