//accept number from user and return smallest digit from number
#include<stdio.h>
int smallestNumber(int iNo)
{
    int iDigit=0;
    while(iNo!=0)
    {
        int iSmallest=9;
        int iDigit=0;
        while (iNo!=0)
        {
            iDigit=iNo%10;
            if(iSmallest>iDigit)
            {
                iSmallest=iDigit;
            }
            if(iSmallest==0)
            {
                break;
            }
            iNo=iNo/10;
        }
        return iSmallest;
    }
}
int main()
{
    int iValue=0;
    int inum=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    inum=smallestNumber(iValue);
    printf("%d",inum);
    return 0;
}