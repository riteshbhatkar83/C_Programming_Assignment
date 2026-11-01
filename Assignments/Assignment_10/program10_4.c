
// Write a program which accepts temperature in Fahrenheit
// and converts it into Celsius.
//
// Formula:
// Celsius = (Fahrenheit - 32) * (5.0 / 9.0)
//
// Input  : 10
// Output : -12.2222
//
// Input  : 34
// Output : 1.11111





#include<stdio.h>
#include<stdlib.h>

double meter(int Fahrenheit)
{   
    double Celsius = 0.0;

    Celsius = (Fahrenheit - 32) * (5.0 / 9.0);
    return Celsius ;
}
int main()
{   
    int iFahrenheit = 0;
    
    double dRet = 0.0;

    printf("Enter Fahrenheit :");
    scanf("%d",&iFahrenheit);

    dRet = meter(iFahrenheit);

    printf("meter is %lf",dRet);

    return EXIT_SUCCESS;
}