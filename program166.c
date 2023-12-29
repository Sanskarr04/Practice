//Check wheather String is Palindrome or not
#include<stdio.h>
#include<stdbool.h>

bool Palindrome(char *str)
{
    char *start=str;
    char *end=str;
    bool flag=true;
    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
        if(*start!=*end)
        {
            flag=false;
            break;
        }
        start++;
        end--;
    }
    return flag;
}

int main()
{
    char Arr[20];
    bool bRet=false;
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    bRet=Palindrome(Arr);
    if(bRet==true)
    {
        printf("Palindrome\n");
    }
    else{
        printf("not Palindrome\n");
    }
    return 0;
}