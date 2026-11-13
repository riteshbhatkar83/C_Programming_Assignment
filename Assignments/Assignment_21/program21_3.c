// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 3
//          iCol = 5
//
// Output : 5   4   3   2   1
//          5   4   3   2   1
//          5   4   3   2   1

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow ,int iCol)
{
    int i = 0, j = 0,iCnt = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1 ,iCnt = iCol; j <= iCol ; j++,iCnt--)
        {
            printf("%d\t",iCnt);
        }
        printf("\n\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);
    return 0;
}