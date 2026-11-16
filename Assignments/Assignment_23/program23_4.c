// 4. Write a program which accepts a string from user
// and display only digits from that string.
//
// Input  : marve89llous121
// Output : 89121
//
// Input  : Demo
// Output : No digits found

#include<stdio.h>
#include<stdlib.h>

void struprx(char * str)
{
    while( *str != '\0')
    {
        if(*str >= '0' && *str <= '9' )
        {
            
           printf("%c",*str); 
        }
        str++;
    }
}

int  main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    struprx(Arr);
    return EXIT_SUCCESS;
}