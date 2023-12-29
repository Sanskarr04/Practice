//accept number from user and check if it is Palindrome or not
#include<stdio.h>
#include<stdbool.h>

bool checkPalindrome(int iNo)
{
    int iDigit=0;
    int iTemp=iNo;//we are making copy of given number
    int iRev=0;
    //At the end of this loop iNo will be 0 so we made copy
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=checkPalindrome(iValue);
    if(bRet==true)
    {
        printf("%d is palindrome",iValue);
    }
    else
    {
        printf("%d is not palindrome",iValue);
    }
    return 0;

}