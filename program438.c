#include<stdio.h>

int StrLenX(char *str)
{
    static int icnt=0;
    if(*str!= '\0')
    {
        icnt++;
        str++;
        StrLenX(str);
    }
    return icnt;
}

int main()
{
    char Arr[20];
    printf("Enter the String: \n");
    scanf("%[^\n]s",Arr);
    printf("%d",StrLenX(Arr));
    
    return 0;
}