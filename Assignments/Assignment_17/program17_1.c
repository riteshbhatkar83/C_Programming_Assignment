// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 4
//
// Output : 1  2  3  4
//          5  6  7  8
//          9  1  2  3
//          4  5  6  7


#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for(i = 1 ;i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
            if(iCnt == 10)  //more accurate cond -(iCnt > 9)
            {
                iCnt = 1;
            }
        }
        printf("\n\n");
    }
}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Cols : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}