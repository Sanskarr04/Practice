
#include<stdio.h>
#include<stdbool.h>



int main()
{
    char Arr[10];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);//   [^\n] is used to take input till we give \n

    printf("Your name is : %s\n",Arr);
    
    return 0;
}