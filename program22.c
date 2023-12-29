//Factors of given number
#include<stdio.h>

void displayFactors(int iNo)
{
    int iCnt=1;
    for(iCnt=1;iCnt<=iNo/2;iCnt+2)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;
    printf("Enter a number: \n");
    scanf("%d",&iValue);

    displayFactors(iValue);
    return 0;
}
//  Time Complexity : O(N)
//  Where N is the input (Natural Number)