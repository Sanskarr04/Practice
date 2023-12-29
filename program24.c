//Check wheather a number is perfect or not

#include<stdio.h>
#include<stdbool.h>
int addition(int iNo)
{
    int iSum=0;
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            // printf("%d\n",iCnt);
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNumber)
{
    int iResult=0;
    iResult=addition(iNumber);
    if(iResult==iNumber)
    {
        return true;
    }
    else  
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is perfect\n ",iValue);
    }
    else
    {
        printf("%d is not perfect ",iValue);
    }
    
    // printf("Sum of factors is: %d",addition(iValue));
    return 0;
}