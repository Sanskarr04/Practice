//count vowels from the String
#include<stdio.h>

int strlenVowels(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I'||*str=='O' || *str=='U'){
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);//   [^\n] is used to take input till we give \n
    iRet=strlenVowels(Arr);
    printf("Numbers of vowels in %s are %d",Arr,iRet);
    
    return 0;
}