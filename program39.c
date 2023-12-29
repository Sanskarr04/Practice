//accept number from user and count how many numbers we have given

#include<stdio.h>
int CountDigits(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=12345;
    int c=0;
    c=CountDigits(iValue);
    printf("%d",c);
    return 0;
}