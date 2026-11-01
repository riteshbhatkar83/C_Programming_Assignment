
// Write a program which accepts the radius of a circle from the user
// and calculates its area.
// Consider PI as 3.14.
//
// Formula: Area = PI * Radius * Radius
//
// Input  : 5.3
// Output : 88.2026
//
// Input  : 10.4
// Output : 339.6224


#include<stdio.h>
#include<stdlib.h>

double AreaOfCircle(float fNo)
{   
    float PI= 3.14f;
    double Area = 0.0;

    Area = PI * fNo * fNo;

    return Area;
}
int main()
{   
    float fRds = 0.0f;
    double dRet = 0.0;

    printf("Enter Redius :");
    scanf("%f",&fRds);

    dRet = AreaOfCircle(fRds);

    printf("Area of circle is %.4lf", dRet);

    return EXIT_SUCCESS;
}