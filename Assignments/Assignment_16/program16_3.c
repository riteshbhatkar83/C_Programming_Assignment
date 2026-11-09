// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 3
//          iCol = 5
//
// Output : A  A  A  A  A
//          B  B  B  B  B
//          C  C  C  C  C


#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';

    for(i = 1,ch = 'A' ; i <= iRow ; i++,ch++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Numbers of Rows and Columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}