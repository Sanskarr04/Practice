#include<stdio.h>

int SumI(int ino)
{
    int idigit=0;
    int isum=0;
    while(ino!=0)
    {
        idigit=ino%10;
        isum=isum+idigit;
        ino=ino/10;
    }
    return isum;

}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    
    iRet=SumI(iValue);
    printf("Summation is %d\n",iRet);
    
    return 0;
}