//
#include<stdio.h>

void displayFactors(int iNo)
{
    int iCnt=1;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        printf("%d",iCnt);
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