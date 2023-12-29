//check wheather String contains z or not from the String
#include<stdio.h>
#include<stdbool.h>
bool check(char *str)
{
    bool flag=false;
    while(*str!='\0')
    {
        if(*str=='z'){
            flag=true;
        }
        str++;
    }
    return flag;
}

int main()
{
    char Arr[20];
    bool bRet=false;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);//   [^\n] is used to take input till we give \n
    bRet=check(Arr);
    if(bRet==true)
    {
        printf("z is present\n");
    }
    else{
        printf("z is not present");
    }
    
    return 0;
}