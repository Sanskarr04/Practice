// copy all lower case letter 
#include<stdio.h>

void strcpyX(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            *dest=*src;
            dest++;
        }
        src++;
    }
    *dest='\0';
    
}
int main()
{
    char arr[20];
    char brr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    strcpySmallX(arr,brr);
    printf("String After copying :%s ",brr);
    return 0;
}