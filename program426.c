#include<stdio.h>

void DisplayI(int ino)
{
    int i=1;
    while(i<=ino)
    {
        printf("%d\t",i);
        i++;
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