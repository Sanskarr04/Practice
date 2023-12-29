#include<stdio.h>

//////////////////////////////////////////////////////////
//  Function Name   : Addition
//  Input           : Unsigned Integer, Unsigned Integer
//  output          : Unsigned Integer
//  Description     : Perform addition of two number
//  Author          : Sanskar Manoj Shrawane
//  Date            : 27-04-2023
//////////////////////////////////////////////////////////


unsigned int Addition(unsigned int ivalue1, unsigned int ivalue2)
{
    unsigned int iresult=0;
    iresult = ivalue1 + ivalue2;
    return iresult;
}

int main()
{
    unsigned int ino1=0, ino2=0, ians=0;

    printf("Enter first number \n");
    scanf("%d",&ino1);

    printf("Enter seccond number \n");
    scanf("%d",&ino2);

    ians=Addition(ino1,ino2);

    printf("Addition is = %d\n",ians);
    return 0;
}