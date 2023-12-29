// copy complete String
#include<stdio.h>

void strcpyX(char *src,char *dest)
{
    while (*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
    
}
int main()
{
    char arr[20];
    char brr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    strcpyX(arr,brr);
    printf("String After copying :%s ",brr);
    return 0;
}