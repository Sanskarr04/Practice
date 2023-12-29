// Replace lower case letter with capital letter and vice versa

#include<stdio.h>

void toggleX(char *str)
{
    
    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    toggleX(arr);
    printf("String After Editing :%s ",arr);
    return 0;
}