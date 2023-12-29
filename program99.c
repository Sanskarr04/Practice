//  input= row=4
//          col=4
//  output= #   $   $   $
//          $   #   $   $
//          $   $   #   $
//          $   $   $   #
#include<stdio.h>

//------------------------------------------
void Display(int row, int col)
{
    if (row!=col)
    {
        printf("Invalid Matrix\n");
        return ;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==j)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t",i);
            }
        }
        printf("\n");
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