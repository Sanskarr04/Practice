/*
Input:= 
row= 4
col= 4
output:- 

*   *   *   *
    *   *   *
        *   *
            *

*/
#include<stdio.h>

//------------------------------------------
void Display(int row, int col)
{
    
    for(int i=row;i>=1;i--)
    {
        for(int j=col;j>=1;j--)
        {
            if(i>=j)
            printf("*\t");
            else
            printf("\t");
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