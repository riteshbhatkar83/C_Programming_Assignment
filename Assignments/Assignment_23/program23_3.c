// 3. Write a program which accepts a string from user
// and toggle the case.
//
// Input  : Marvellous Multi OS
// Output : mARVELLOUS mULTI os

#include<stdio.h>
#include<stdlib.h>

void struprx(char * str)
{
    while( *str != '\0')
    {
        if(*str >= 97 && *str <= 122 )
        {
            * str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            * str = *str + 32;   
        }
        *str++;
    }
}

int  main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    struprx(Arr);

    printf("Modified String is : %s \n ",Arr);
    return EXIT_SUCCESS;
}