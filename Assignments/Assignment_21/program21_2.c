// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 3
//
// Output : 1   2   3
//          1   2   3
//          1   2   3
//          1   2   3

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1 ; i <= iRow ;i++)
    {
        for(j = 1 ,iCnt = 1; j <= iCol ; j++,iCnt++)
        {
            printf("%d\t",iCnt);
        }

          printf("\n\n");
    }

  
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Numbers of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}