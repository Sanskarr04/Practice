//accept number and digit from user and is that number is
//present or not

#include<stdio.h>
#include<stdbool.h>

bool check(int iNo,int icheck)
{
    int iDigit=0;
    bool b=false;
    if(icheck<0 || icheck>9)
    {
        return false;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==icheck){
            b=true;
            break;
        }
        iNo=iNo/10;
    }
    return b;
}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;

    printf("Enter number: \n");
    scanf("%d",&iValue1);

    printf("enterr digit(0-9) you want to find\n");
    scanf("%d",&iValue2);

    bRet=check(iValue1,iValue2);
    if(bRet==true)
    {
        printf("present");
    }
    else{
        printf("not present");
    }
    return 0;
}