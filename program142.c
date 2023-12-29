//return First Occurance of given character of String
//Another Logic
#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurance(char *str,char cValue)
{
    int iCnt=1;
    while (*str!='\0' && *str!=cValue)
    {
        iCnt++;
        str++;    
    }
    if(*str=='\0')
    {
        return ERR_NOTFOUND;
    }else{
        return iCnt;
    }
    
    
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
    
    iRet=FirstOccurance(arr,ch);
    if(iRet==ERR_NOTFOUND)
    {
        printf("There is no such character");
    }else{
        printf("First occurance of that character is %d\n",iRet);
    }
    
    return 0;
}