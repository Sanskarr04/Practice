//accept number from user and return avg

#include<stdio.h>
float avgOfNumber(int iNo)
{
    float avg=0.0f;
    int iDigit=0;
    int iSum=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        iCnt++;
    }
    avg=(float)iSum/iCnt;
    return avg;
    
}
int main()
{
    int iValue=0;
    float fRet=0.0f;

    printf("Enter number\n");
    scanf("%d",&iValue);

    fRet=avgOfNumber(iValue);
    printf("%f",fRet);
    return 0;
}