//  input= row=4
//          col=4
//  output= 1   &   1   & 
//          2   &   2   &
//          3   &   3   &
//          4   &   4   &

#include<stdio.h>

//------------------------------------------
void Display(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j%2==0)
            {
                printf("&\t");
            }
            else
            {
                printf("%d\t",i);
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