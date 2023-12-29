//find the factorials of the number

#include<stdio.h>

int Factorial(int iNo)
{
    int iRet=1;
    for(int i=1;i<=iNo;i++)
    {
        iRet=iRet*i;
    }
    return iRet;

}
int main()
{
    int iValue=0;
    int iAns=0;
    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iAns=Factorial(iValue);
    printf("%d",iAns);

    return 0;
}