
// Write a program which accepts distance in kilometres
// and converts it into metres.
// (1 kilometre = 1000 metres)
//
// Input  : 5
// Output : 5000
//
// Input  : 12
// Output : 12000




#include<stdio.h>
#include<stdlib.h>

int meter(int iNo)
{   
    int M = 0;

    M = iNo * 1000;
    return M ;
}
int main()
{   
    int iValue = 0;
    
    int iRet = 0;

    printf("Enter km :");
    scanf("%d",&iValue);

    iRet = meter(iValue);

    printf("meter is %d",iRet);

    return EXIT_SUCCESS;
}