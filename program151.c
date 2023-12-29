// Replace lower case letter with capital letter and vice versa
//Diffrent Approach
#include<stdio.h>

void toggleX(char *str)
{
    int gap='a'-'A';
    while (*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-gap;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str=*str+gap;
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