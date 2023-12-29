#include<stdio.h>

void DisplayR(int ino)
{
    static int i=1;
    if(i<=ino)
    {
        printf("%d\t",i);
        i++;
        DisplayR(ino);
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