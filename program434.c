#include<stdio.h>

int SumR(int ino)
{
    int idigit=0;
    static int isum=0;
    if(ino!=0)
    {
        idigit=ino%10;
        isum=isum+idigit;
        ino=ino/10;
        SumR(ino);
    }
    return isum;

}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    
    iRet=SumR(iValue);
    printf("Summation is %d\n",iRet);
    
    return 0;
}