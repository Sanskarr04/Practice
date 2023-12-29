//  input= 5 
//  output= A   1   B   2   C   3   D   4   E   5


#include<stdio.h>

void Display(int iNo)
{
    char ch='\0';
    for (int i =1,ch ='A'; i <=iNo; i++, ch++)
    {
        
        printf("%c\t%d\t",ch,i);
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