//find the factorials of the number using while loop

#include<stdio.h>
typedef unsigned long int ULINT;


ULINT Factorial(int iNo)
{
    ULINT iRet=1;
    if (iNo < 0)
    {
        iNo=-iNo;
    }
    
    int i=1;
    while(i<=iNo)
    {
        iRet=iRet*i;
        i++;
    }

    return iRet;

}
int main()
{
    int iValue=0;
    ULINT iAns=0;
    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iAns=Factorial(iValue);
    printf("%d",iAns);

    return 0;
}