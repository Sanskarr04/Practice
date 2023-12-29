// while loop

#include<stdio.h>

void display(int iNo)
{
    int iCnt=iNo;
    while(iCnt>=1)
    {
        printf("%d",iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue=0;
    
    printf("Enter number :- \n ");
    scanf("%d",&iValue);

    display(iValue);

    return 0;

}