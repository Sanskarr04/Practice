//accept a number from user check wheather numberr is prime or not

#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
    
//-----------------------------------------
    //  Sir Logic
    bool bFlag=true;
    for(int i=2;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            bFlag=false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a number: \n");
    scanf("%d",&iValue);

    bRet=checkPrime(iValue);
    if(bRet==true)
    {
        printf("%d is a prime number",iValue);
    }
    else
    {
        printf("%d is not prime number",iValue);
    }

}