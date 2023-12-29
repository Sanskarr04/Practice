//check wheather character is Digit or not?
#include<stdio.h>
#include<stdbool.h>

bool check(char ch)
{
    
    // Use this method which is without ascii value
    if(ch>='0' && ch<='9')
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    char ch='\0';
    bool bRet=false;

    printf("Enter character\n");
    scanf("%c",&ch);

    bRet=check(ch);

    if(bRet==true)
    {
        printf("%c is Digit letter\n",ch);
    }else{
        printf("%c is not Digit letter\n",ch);
    }
    
    return 0;
}