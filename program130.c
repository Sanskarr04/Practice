
#include<stdio.h>

int strlenx(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet=0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);//   [^\n] is used to take input till we give \n
    iRet=strlenx(Arr);
    printf("Length of %s is %d\n",Arr,iRet);
    
    return 0;
}