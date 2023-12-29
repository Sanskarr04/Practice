//  input= 7 
//  output= #   #   #   #   #   #   #


#include<stdio.h>

void Display(int iNo)
{
    int c=0;
    for (int  i = 1; i <= iNo; i++)
    {
        printf("%d\t",i-1);
        
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