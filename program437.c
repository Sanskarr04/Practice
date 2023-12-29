#include<stdio.h>

int StrLenX(char *str)
{
    int icnt=0;
    while(*str!= '\0')
    {
        icnt++;
        str++;
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