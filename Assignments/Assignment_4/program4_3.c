// 3 – Find the Greater of Two Numbers
// Problem Statement: Accept two integers and determine which number is greater. If both numbers are equal, display an appropriate message.

// Expected Output:
// - Input: 10 20 → 20 is Greater
// - Input: 50 30 → 50 is Greater
// - Input: 15 15 → Both Numbers Are Equal

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
      printf("%d is Greater",iNo1);


    }
    else if(iNo1 < iNo2)
    {
        printf("%d is Greater",iNo2);

    }
    else
    {   
        printf("Both are equal");
        
    }
}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two Number : \n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1, iValue2);
    return EXIT_SUCCESS;
}

//new approach