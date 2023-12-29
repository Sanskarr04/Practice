//  input= row=3
//          col=5
//  output= #   #   #   #   #
//          *   *   *   *   *
//          #   #   #   #   #
//          *   *   *   *   *

#include<stdio.h>

// void Display(int row,int col)
// {
//     for (int i = 1; i <=row/2; i++)
//     {
//         for(int j=1;j<=col;j++)
//         {
//             printf("#\t");
//         }
//             printf("\n");
//         for(int j=1;j<=col;j++)
//         {
//             printf("*\t");
//         }
//         printf("\n");
//     }  
// }
//------------------------------------------
void Display(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i%2==0)
            {
                printf("*");
            }
            if(i%2!=0)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
//-------------------------------------------
// void Display(int row, int col)
// {
//     char Arr[2]={'*','#'};
//     for(int i=1;i<=row;i++)
//     {
//         for(int j=1;j<=col;j++)
//         {
//             printf("%c",Arr[(i%2)]);
//         }
//         printf("\n");
//     }
// }
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