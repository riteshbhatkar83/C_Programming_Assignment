//Q3. Accept one number from the user. If the number is less than 10, print "Hello"; otherwise, print "Demo".

#include<stdio.h>

char* Display( int iNo)   //character pointer.
                           //It is commonly used to store the address of a character or to work with strings (words and text).
{
    if(iNo < 10)
    {
        return "Hello";
    }
    else
    {
        return "Demo";
    }
}


    int main()
    {
        int iValue = 0;

        printf("Enter number : \n");
        scanf("%d", &iValue);

        char* A = Display(iValue);

        printf("%s\n",A);


        return 0 ;
    }

