//check wheather number is divisible by 3 and 5

#include<stdio.h>
#include<stdbool.h>

bool divisible(int iNo)
{
    if(iNo%3==0 && iNo%5==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue=0;
    bool bRet=false;
    printf("Enter a number: \n");
    scanf("%d",&ivalue);

    bRet=divisible(ivalue);
    if(bRet==true)
    {
        printf("%d this number is completely divisible by 3 and 5",ivalue);
    }
    else
    {
        printf("%d this number is not completely divisible by 3 and 5",ivalue);
    }

    return 0;
}