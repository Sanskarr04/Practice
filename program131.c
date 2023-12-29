//count small alphabets from the String
#include<stdio.h>

int strlenSmall(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z'){
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
    iRet=strlenSmall(Arr);
    printf("Numbers of small letters in %s are %d",Arr,iRet);
    
    return 0;
}