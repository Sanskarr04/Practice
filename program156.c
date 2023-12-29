// copy String in and print it in reverse direction 
#include<stdio.h>

void strcpyTrevX(char *src,char *dest)
{
    int iLength=0;
    while (*src!='\0')
    {
        iLength++;
        src++;
    }
    src--;
    //--------------with for loop--------------
    for (int i = 0; i<=iLength; i++)
    {
        *dest=*src;
        src--;
        dest++;
    }
    //------------with while loop----------------
    // while (iLength!=0)
    // {
    //     *dest=*src;
    //     src--;
    //     dest++;
    //     iLength--;
    // }
    
    *dest='\0';
}
int main()
{
    char arr[20];
    char brr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    
    strcpyTrevX(arr,brr);
    printf("String After copying :%s ",brr);
    return 0;
}