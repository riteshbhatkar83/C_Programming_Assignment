// 1 – Find the Greatest of Three Numbers
// Problem Statement: Accept three integers and determine the greatest number among them. The program must also work correctly when two or all three numbers are equal.

// Expected Output:
// - Input: 10 50 30 → 50 is Greatest
// - Input: 40 40 20 → 40 is Greatest
// - Input: 15 15 15 → 15 is Greatest 

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1,int iNo2,int iNo3)
{
    if((iNo1>iNo2) && (iNo1>iNo3))
    {
        printf("%d is Greatest\n",iNo1);
    }
    else if((iNo2>iNo1) && (iNo2>iNo3))
    {
         printf("%d is Greatest\n",iNo2);
       
    }
    else
    {
         printf("%d is Greatest\n",iNo3);
    }

}

int main()
{   
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three number(after typing each number press enter ) : \n");
    scanf("%d\n %d\n %d",&iValue1 ,&iValue2,&iValue3);

    FindGreater(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}
