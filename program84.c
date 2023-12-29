//  input= 5 
//  output= 2   4   6   8   10  12  14


#include<stdio.h>

void Display(int iNo)
{
    for (int i =1; i <=iNo; i++)
    {
        
        printf("%d\t",i*2);
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