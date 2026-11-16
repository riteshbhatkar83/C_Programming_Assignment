// 2. Write a program which accepts a string from user
// and convert it into upper case.
//
// Input  : Marvellous Multi OS
// Output : MARVELLOUS MULTI OS

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