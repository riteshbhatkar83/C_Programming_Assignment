// Accept a single-digit number from the user and print it in words.
//
// Input  : 9
// Output : Nine
//
// Input  : -3
// Output : Three
//
// Input  : 12
// Output : Invalid Number

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    if(iNo > 9)
    {
        printf("invalid");
    }
    else{

    switch(iNo)
    {
        case 0 : printf("Zero");
        break;

        case 1 : printf("one");
        break;

        case 2 : printf("two");
        break;

        case 3 : printf("three");
        break;

        case 4 : printf("four");
        break;

        case 5 : printf("five");
        break;

        case 6 : printf("six");
        break;

        case 7 : printf("seven");
        break;

        case 8 : printf("eight");
        break;

        case 9 : printf("nine");
        break;

    }
}
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
}


