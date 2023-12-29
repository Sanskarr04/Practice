#include<stdio.h>

void DisplayR(int ino)
{
    static int i=1;

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

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    DisplayR(iValue);
    
    printf("End of main\n");
    
    return 0;
}