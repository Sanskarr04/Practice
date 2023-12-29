// copy all Capital case letter 
#include<stdio.h>

void strcpyToggleX(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src>='A' && *src<='Z')
        {
            *dest=*src;
            dest++;
        }
        src++;  
    }
    *dest='\0';//for completing we should add '\0'
    
}
int main()
{
    char arr[20];
    char brr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    strcpyToggleX(arr,brr);
    printf("String After copying :%s ",brr);
    return 0;
}