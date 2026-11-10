// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 5
//          iCol = 5
//
// Output : a  b  c  d  e
//          1  2  3  4  5
//          a  b  c  d  e
//          1  2  3  4  5
//          a  b  c  d  e

#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    int iCnt = 0;
    

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1 ,ch = 'a',iCnt = 1; j <= iCol ; j++ ,ch++,iCnt++)
        {
            if( i % 2 != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",iCnt);
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