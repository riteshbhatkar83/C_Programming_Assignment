// Write a program which accepts a name from the user
// and prints that name.
//
// Input  : Ritesh Bhatkar
// Output : Ritesh Bhatkar

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name");
    scanf("%[^\n]",Name);

    printf("your name is %s",Name);

    return 0;
}


// %s	String (stops at space)
// %[^\n]	Reads string including spaces