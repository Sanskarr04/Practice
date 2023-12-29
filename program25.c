#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNo)
{
    int isum=0;
    for(int i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            isum+=i;
        }
        if (isum>iNo)//if sum is more than a number then we should stop the loop ton that point
        {
            break;
        }
    }
    if(isum==iNo)
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
    printf("Enter a number \n");
    scanf("%d",&iValue);

    bRet=checkPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is a perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }


    return 0;
}