#include<stdio.h>

void DisplayI(int ino)
{
    while(ino!=0)
    {
        printf("%d\t",ino%10);
        ino=ino/10;
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    
    DisplayR(iValue);
    
    return 0;
}