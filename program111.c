/*
Input:= 
row= 6
col= 6
output:- 
A
A   B
A   B   C
A   B   C   D
A   B   C   D   E
A   B   C   D   E   F
*/
#include<stdio.h>

//------------------------------------------
// void Display(int row, int col)
// {
//     for(int i=1;i<=row;i++)
//     {
//         char ch='A';
//         for(int j=1;j<=i;j++)
//         {
//             printf("%c",ch++);
//         }
//         printf("\n");
        
//     }
// }
//-------------------------------------
void Display(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        char ch='A';
        for(int j=1,ch='A';j<=i;j++,ch++)
        {
            printf("%c",ch);
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