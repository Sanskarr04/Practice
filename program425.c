#include<stdio.h>

void DisplayI(int ino)
{
    int i=1;
    for(i=1;i<=ino;i++)
    {
        printf("%d\t",i);
    }

}

int main()
{
    int iValue=0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    DisplayR(iValue);
    
    printf("End of main\n");
    
    return 0;
}