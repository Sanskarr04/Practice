// Replace Capital characters with '*' and return complete String

#include<stdio.h>

void EditString(char *str)
{
    
    while (*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str='*';
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    EditString(arr);
    printf("String After Editing :%s ",arr);
    return 0;
}