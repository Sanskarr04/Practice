//return last Occurance of given character of String

#include<stdio.h>
#define ERR_NOTFOUND -1

int lastOccurance(char *str,char cValue)
{
    int iCnt=1;
    int iPos=ERR_NOTFOUND;

    while (*str!='\0')
    {
        if(*str==cValue)
        {
            iPos=iCnt;
            
        }
        iCnt++;
        str++;    
    }
    
    return iPos;
    
}
int main()
{
    char arr[20];
    char ch='\0';
    int iRet=0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&ch);
    
    iRet=lastOccurance(arr,ch);
    if(iRet==ERR_NOTFOUND)
    {
        printf("There is no such character");
    }else{
        printf("First occurance of that character is %d\n",iRet);
    }
    
    return 0;
}