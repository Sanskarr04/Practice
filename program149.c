// Replace lower case letter with capital letter

#include<stdio.h>

void strlwr(char *str)
{
    
    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    strlwr(arr);
    printf("String After Editing :%s ",arr);
    return 0;
}