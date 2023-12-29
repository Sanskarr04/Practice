//check wheather chawracter is Capital or not?
#include<stdio.h>
#include<stdbool.h>

bool check(char ch)
{
    
    // if(ch>=65 && ch<=90)
    // {
    //     return true;
    // }
    // else{
    //     return false;
    // }
    //------------OR-------------
    if(ch>='A' && ch<='Z')
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
        printf("%c is capital letter\n",ch);
    }else{
        printf("%c is not capital letter\n",ch);
    }
    
    return 0;
}