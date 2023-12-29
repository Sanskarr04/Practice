#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int i=1;
    while(i<=ino)
    {
        printf("*\t");
        i++;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}