//sum of digits


#include<stdio.h>

int sumOfDigits(int iNo)
{

    int iDigits=0;
    int sum=0;
    while(iNo!=0)
    {
        iDigits=iNo%10;
        sum=sum+iDigits;
        iNo=iNo/10;
    }
    // printf("%d",sum);
    return sum;
}
int main()
{
    int iValue=0;
    int iAns=0;
    printf("Enter a number \n");
    scanf("%d",&iValue);

    iAns=sumOfDigits(iValue);
    printf("%d",iAns);
    return 0;

}