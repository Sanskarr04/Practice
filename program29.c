//

#include<stdio.h>

long int calculatePower(int iNo1, int iNo2)
{
    long int iPow=1;
    if((iNo1<0) || (iNo2<0))
    {
        return 0;
    }
    for(int i=0;i<iNo2;i++)
    {
        iPow=iPow*iNo1;
    }
    return iPow;
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    long int iAns=0;
    printf("Enter first number \n");
    scanf("%d",&iValue1);

    printf("ENter seccond value \n");
    scanf("%d",&iValue2);

    iAns=calculatePower(iValue1,iValue2);
    printf("%d",iAns);

    return 0;
}