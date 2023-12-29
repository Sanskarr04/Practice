//accept a number from user check wheather numberr is prime or not

#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
    // My Logic
    int c=0;
    for(int i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            c++;
        }
        if(c>1)
        {
            break;
        }
    }
    if(c==1)
    {
        return true;
    }
    else 
    {
        return false;
    }
//-----------------------------------------
    
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