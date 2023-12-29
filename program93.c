//  input= row=3
//          col=5
//  output= a   b   c   d   e
//          a   b   c   d   e
//          a   b   c   d   e

#include<stdio.h>

void Display(int row,int col)
{
    char ch='\0';
    for (int i = 1; i <=row; i++)
    {
        ch='a';
        for (int j = 1; j <= col; j++)
        {
            printf("%c\t",ch++);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter rows\n");
    scanf("%d",&iValue1);

    printf("Enter Coloumns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}