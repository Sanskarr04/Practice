//accept number

#include<stdio.h>

int countOddDigit(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main(){
    int ivalue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet=countOddDigit(ivalue);
    printf("Frequency of odd digits in %d is %d",ivalue,iRet);
    return 0;
}