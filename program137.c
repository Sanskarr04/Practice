//count z from the String
#include<stdio.h>

int strlenZ(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str=='z'){
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
    iRet=strlenZ(Arr);
    printf("Numbers of z     in %s are %d",Arr,iRet);
    
    return 0;
}