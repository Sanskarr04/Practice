//  input= 5 
//  output= 1   2   3   4   5   5   4   3   2   1


#include<stdio.h>

void Display(int iNo)
{
    int i =1;
    for (i =1; i <=iNo; i++)
    {
        printf("%d\t",i);
    }
    for (i =iNo; i >= 1; i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}