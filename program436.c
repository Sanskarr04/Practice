#include<stdio.h>

void FactorsR(int ino)
{
    static int icnt=1;
    if(icnt<=ino/2)
    {
        if(ino%icnt==0)
        {
            printf("%d\n",icnt);
        }
        icnt++;
        FactorsR(ino);
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);
    FactorsR(iValue);
    
    return 0;
}