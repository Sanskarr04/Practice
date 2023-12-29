//count Digits from the String
#include<stdio.h>

int strlenDigits(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='0' && *str<='9'){
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
    iRet=strlenDigits(Arr);
    printf("Numbers of Digits in %s are %d",Arr,iRet);
    
    return 0;
}