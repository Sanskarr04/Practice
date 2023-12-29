//  write a program which checks weather number is even or odd?

#include<stdio.h>   //for printf and scanf
#include<stdbool.h> //FOR BOOLEAN


//Function name    : CheckEvenOdd
//Input            : Integer
//ouput            : boolean
//Description      : checks weather input is even or odd
//Author           : sanskar Manoj shrawane
//Date             : 28-04-2023
bool CheckEvenOdd(int iNo1)
{
    if(iNo1%2==0)
    {
        return true;
    }
    else {
        return false;
    }
}

//  Entry point function  //
int main()
{   
    int ivalue=0;
    bool bres=false;

    printf("Enter a number to check weather number is even or odd: \n");
    scanf("%d",&ivalue);

    bres=CheckEvenOdd(ivalue);

    if(bres==true)
    {
        printf("%d is a even",ivalue);
    }
    else {
        printf("%d is odd number",ivalue);
    }
    return 0;

}