// copy String in and print it in reverse direction 
#include<stdio.h>

void strnCatX(char *src,char *dest, int n)
{
    
    while (*dest!='\0')
    {
        dest++;
    }
    while (*src!='\0'&& n!=0)
    {
        *dest=*src;
        dest++;
        src++;
        n--;
    }
    
    *dest='\0';
}
int main()
{
    char arr[20];
    char brr[20]="Demo";
    int num=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter number\n");
    scanf("%d",&num);

    strnCatX(arr,brr,num);
    printf("String After editing :%s ",brr);
    return 0;
}