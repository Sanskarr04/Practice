
#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[10];
    int iRet=0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);//   [^\n] is used to take input till we give \n
    iRet=strlen(Arr);
    printf("Length of %s is %d\n",Arr,iRet);
    
    return 0;
}