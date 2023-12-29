//  input= 7 
//  output= A   A   A   A   A   A   A


#include<stdio.h>

void Display(int iNo)
{
    for (int  i = 1; i <= iNo; i++)
    {
        printf("A\t");
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