
// Write a program which accepts area in square feet and converts it
// into square metres.
// (1 square foot = 0.0929 square metres)
//
// Input  : 5
// Output : 0.464515
//
// Input  : 7
// Output : 0.650321


#include<stdio.h>
#include<stdlib.h>

double meter(int SqFoot)
{   
    double SqMetres = 0.0;

    SqMetres = SqFoot * 0.0929;
    return SqMetres ;
}
int main()
{   
    int iSqFoot = 0;
    
    double dRet = 0.0;

    printf("Enter sq Foot :");
    scanf("%d",&iSqFoot);

    dRet = meter(iSqFoot);

    printf("sq metres is %lf",dRet);

    return EXIT_SUCCESS;
}