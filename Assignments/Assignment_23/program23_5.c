// 5. Write a program which accepts a string from user
// and count number of white spaces.
//
// Input  : Marvellous
// Output : 0
//
// Input  : Marvellous Infosystems
// Output : 1
//
// Input  : Marvellous Infosystems by Piyush Manohar Khairnar
// Output : 5
#include<stdio.h>
#include<stdlib.h>

int struprx(char * str)
{
    int iCnt = 0;
    while( *str != '\0')
    {
        if(*str == ' ' )
        {
            
           iCnt++; 
        }
        str++;
    }
    return iCnt;
}

int  main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    iRet = struprx(Arr);

       printf("Number of white spaces are: %d\n",iRet);
    return EXIT_SUCCESS;
}