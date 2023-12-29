//Compare two Strings
#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1,char *str2)
{
    for(;*str1!='\0' && *str2!='\0' && *str1==*str2;str1++,str2++);//semicolon is important
    return (*str1=='\0' && *str2=='\0'); 
}
int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet=false;

    printf("Enter First String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Seccond String: \n");
    scanf(" %[^'\n']s",Brr);

    bRet=strcmpX(Arr,Brr);
    if(bRet==true)
    {
        printf("Both Strings are same\n");
    }
    else{
        printf("Both are diffrent\n");
    }
    return 0;
}