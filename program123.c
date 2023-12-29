#include<stdio.h>

int main()
{
    int i=0;
    printf("ASCII Table\n");
    for (int i = 0; i < 128; i++)
    {
        printf("%c\t%d\n",i,i);
    }
    
    return 0;
}