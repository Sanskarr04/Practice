//Count how many times 8 occurs in digit

#include<stdio.h>

int CountDigitFrequency(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if (iDigit==8) 
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("ENter number\n");
    scanf("%d",&iValue);

    iRet=CountDigitFrequency(iValue);

    printf("%d",iRet);
    return 0;

}