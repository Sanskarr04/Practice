//accept number from user and return smallest digit from number
#include<stdio.h>
int largestNumber(int iNo)
{
    int iDigit=0;
    while(iNo!=0)
    {
        int iLargest=0;
        int iDigit=0;
        while (iNo!=0)
        {
            iDigit=iNo%10;
            if(iLargest<iDigit)
            {
                iLargest=iDigit;
            }
            if(iLargest==9)
            {
                break;
            }
            iNo=iNo/10;
        }
        return iLargest;
    }
}
int main()
{
    int iValue=0;
    int inum=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    inum=largestNumber(iValue);
    printf("%d",inum);
    return 0;
}