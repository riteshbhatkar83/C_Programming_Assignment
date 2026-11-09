// Accept number of rows and number of columns from user
// and display the below pattern.
//
// Input  : iRow = 4
//          iCol = 4
//
// Output : A  B  C  D
//          A  B  C  D
//          A  B  C  D
//          A  B  C  D


#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1,ch = 'A' ; j <= iCol ; j++,ch++)
        {
            printf("%c\t",ch);
        }

        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number of Cols : ");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}