//  input= 5 
//  output= A   B   C   D   E


#include<stdio.h>

void Display(int iNo)
{
    char ch='A';
    for (int  i =1; i <=iNo; i++)
    {
        
        printf("%c\t",ch++);
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