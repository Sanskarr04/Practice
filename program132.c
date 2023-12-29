//count Capital alphabets from the String
#include<stdio.h>

int strlenCapital(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z'){
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
    iRet=strlenCapital(Arr);
    printf("Numbers of Capital letters in %s are %d",Arr,iRet);
    
    return 0;
}