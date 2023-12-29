// copy String in and print it in reverse direction 
#include<stdio.h>

// 1: Travel till end of dest
// 2: Copy the data from src to dest
// 3: Write '\0' at the end of dest
void strCatX(char *src,char *dest)
{
    // 1: Travel till end of dest
    while (*dest!='\0')
    {
        dest++;
    }
    //for adding space
    *dest=' ';
    dest++;
    // 2: Copy the data from src to dest
    while (*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    // 3: Write '\0' at the end of dest
    *dest='\0';
}
int main()
{
    char arr[20];
    char brr[20]="DEMO";
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    strCatX(arr,brr);
    printf("String After copying :%s ",brr);
    return 0;
}