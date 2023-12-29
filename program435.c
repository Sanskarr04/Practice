#include<stdio.h>

void FactorsI(int ino)
{
    int icnt=1;
    while(icnt<=ino/2)
    {
        if(ino%icnt==0)
        {
            printf("%d",icnt);
        }
        icnt++;
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);
    FactorsI(iValue);
    
    return 0;
}