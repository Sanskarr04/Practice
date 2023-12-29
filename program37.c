//

#include<stdio.h>
typedef unsigned long int ULONG;


ULONG calculatePower(int iNo1, int iNo2)
{
    ULONG iPow=1;
    if((iNo1<0) || (iNo2<0))
    {
        return 0;
    }
    int i=1;
    while(i<=iNo2)
    {
        iPow=iPow*iNo1;
        i++;
    }
    return iPow;
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    ULONG iAns=0;
    printf("Enter first number \n");
    scanf("%d",&iValue1);

    printf("ENter seccond value \n");
    scanf("%d",&iValue2);

    iAns=calculatePower(iValue1,iValue2);
    printf("%d",iAns);

    return 0;
}