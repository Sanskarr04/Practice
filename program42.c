//wheather number contains 8 or not?

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo)
{
    int digit=0;
    while(iNo!=0)
    {
        digit=iNo%10;
        if(digit==8)
        {
            break;
        }
        iNo=iNo/10;
    }
    if(digit==8){
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    //-----------OR-------------
    // if(iNo==0){
    //     return FALSE;
    // }
    // else
    // {
    //     return TRUE;
    // }
    //-------OR---------
    // if(iNo==0){
    //     return FALSE;
    // }
    // else
    // {
    //     return TRUE;
    // }
}
int main(){
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter a number\n");
    scanf("%d",&iValue);
    bRet=check(iValue);

    if(bRet==TRUE)
    {
        printf("Digit 8 is present");
    }
    else{
        printf("digit 8 is not present");
    }
}