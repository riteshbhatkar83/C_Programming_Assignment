
// Write a program which accepts the width and height of a rectangle
// from the user and calculates its area.
//
// Formula: Area = Width * Height
//
// Input  : 5.3  9.78
// Output : 51.834



#include<stdio.h>
#include<stdlib.h>

double AreaOfrectangle(float fWidth , float fHight)
{   
    
    double Area = 0.0;

    Area = fWidth * fHight;

    return Area;
}
int main()
{   
    float fWidth = 0.0f;
    float fHight = 0.0f;
    double dRet = 0.0;

    printf("Enter Width :");
    scanf("%f",&fWidth);

    printf("\n");

    printf("Enter Height :");
    scanf("%f",&fHight);

    dRet = AreaOfrectangle(fWidth,fHight);

    printf("Area of rectangle is %.3lf", dRet);

    return EXIT_SUCCESS;
}