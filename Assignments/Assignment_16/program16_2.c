// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 4
//
// Output : A  B  C  D
//          a  b  c  d
//          A  B  C  D
//          a  b  c  d


#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0, j = 0 ;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1 ; i <= iRow ; i++ )
    {
        for(j = 1,ch1 = 'A',ch2 = 'a' ; j <= iCol ; j++, ch1++,ch2++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter NUmber of Rows and Cols : ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1, iValue2);

    return 0;
}