#include "program5header.h"
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