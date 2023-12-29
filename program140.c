//
#include<stdio.h>
#include<stdlib.h>

int strlenZ(char *str,char c)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==c){
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
    char ch='\0';

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);//   [^\n] is used to take input till we give \n
    
    fflush(stdin);

    printf("Enter character: \n");
    scanf("%c",&ch);
    iRet=strlenZ(Arr,ch);
    printf("Numbers of %c in %s are %d",ch,Arr,iRet);
    
    return 0;
}