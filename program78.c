//  input= 7 
//  output= 7   6   5   4   3   2   1


#include<stdio.h>

void Display(int iNo)
{
    int c=0;
    for (int  i = iNo; i >=1; i--)
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