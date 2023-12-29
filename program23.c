//Addition of Factors

#include<stdio.h>

int addition(int iNo)
{
    //if user provides -ve value we will make it positive.
    if(iNo<0)
    {
        iNo=-iNo;
    }
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
int main()
{
    int iValue=0;
    int isum=0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    isum=addition(iValue);
    printf("Sum of factors of given number is : \n%d ",isum);
    // printf("Sum of factors is: %d",addition(iValue));
    return 0;
}