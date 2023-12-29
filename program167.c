//Check wheather String is Palindrome or not
#include<stdio.h>
#include<stdbool.h>

bool Palindrome(char *str)
{
    char *start=str;
    char *end=str;
    //bool flag=true;//without flag
    while (*end!='\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
        if (*start!=*end)
        {
            break;
        }
        start++;
        end--;
    }
    if (start<end)
    {
        return false;
    }else{
        return true;
    }
    
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