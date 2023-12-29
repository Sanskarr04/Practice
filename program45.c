//accept number and digit from user and is that number is
//present or not

#include<stdio.h>

int count(int iNo,int icheck)
{
    int iDigit=0;
    int iCnt=0;
    if(icheck<0 || icheck>9)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==icheck){
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue1);

    printf("enterr digit(0-9) you want to find\n");
    scanf("%d",&iValue2);

    iRet=count(iValue1,iValue2);
    printf("Frequency of %d in %d is %d",iValue2,iValue1,iRet);
    return 0;
}