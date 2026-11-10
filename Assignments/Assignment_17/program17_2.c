// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 5
//
// Output : 2  4  6  8  10
//          1  3  5  7  9
//          2  4  6  8  10
//          1  3  5  7  9

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCols)
{
    int i = 0;
    int j = 0;
    int iCnt = 2;
    

    for(i = 1; i <= iRow ; i++)
    {
        if(i % 2 != 0)
             {
                iCnt = 2;
             }
             else
             {
                iCnt = 1;
             }
        for(j = 1 ; j <= iCols ; j++)
        {
             

             printf("%d\t",iCnt);
             iCnt ++;
             iCnt = iCnt +1;
         
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