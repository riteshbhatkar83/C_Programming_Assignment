//Q Accept on number and check whether is is divisible by 5 or not

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;  //Creates BOOL as another name for the int data type.
#define TRUE 1     //#define TRUE 1 means TRUE is replaced with 1
#define FALSE 0    //#define FALSE 0 means FALSE is replaced with 0.

BOOL check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}

int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;  //int bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    bRet = check(iValue);

    if(bRet == TRUE)    //check bRet == 1 or not
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return EXIT_SUCCESS;
}