#include<stdio.h>
#include<stdlib.h>

void DisplayI(int ino)
{
    int i=1;
    while(i<=ino)
    {
        printf("*\t");
        i++;
    }
}
void DisplayR(int ino)
{
    int i=1;
    if(i<=ino)
    {
        printf("*\t");
        i++;
        DisplayR(ino);  //Recursive Call
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&iValue);
    // DisplayI(iValue);
    DisplayR(iValue);
    return 0;
}