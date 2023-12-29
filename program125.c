//check wheather chawracter is Small or not?
#include<stdio.h>
#include<stdbool.h>

bool check(char ch)
{
    
    // Use this method which is without ascii value
    if(ch>='a' && ch<='z')
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
        printf("%c is small letter\n",ch);
    }else{
        printf("%c is not small letter\n",ch);
    }
    
    return 0;
}