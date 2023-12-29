//return last Occurance of given character of String

#include<stdio.h>

void countCapitalSmall(char *str)
{
    int small=0,capital=0;
    while (*str!='\0')
    {
        if((*str>='a' &&*str<='z' ))
        {   
            small++;

        }else if (*str>='A' && *str<='Z')
        {
            capital++;
        }
        str++;
    }
    
 printf("Small letters are %d and capital letters are %d",small,capital);    
}
int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    countCapitalSmall(arr);
    
    return 0;
}