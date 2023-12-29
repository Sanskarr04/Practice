/*
Input:= 
row= 6
col= 6
output:- 
*   a   a   a   a   a
b   *   b   b   b   b
c   c   *   c   c   c
d   d   d   *   d   d
e   e   e   e   *   e
f   f   f   f   f   *
*/
#include<stdio.h>

//------------------------------------------
void Display(int row, int col)
{
    char ch='\0';
    for(int i=1,ch='a';i<=row;i++,ch++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==j)
            {
                printf("*\t");
            }
            else{
                printf("%c\t",ch);
            }
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