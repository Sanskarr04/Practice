//Check which number is smallest from the numbers
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength, int inum)
{
    bool bFlag=false;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==inum)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}
bool Search(int Arr[],int iLength, int inum)
{
    bool bFlag=false;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==inum)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iNum=0;
    bool bRet=false;
    printf("Enter number of elements you want to store\n");
    scanf("%d",&iSize);
    ptr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(int i=0;i<iSize;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("Elements of the array are\n");
    for(int i=0;i<iSize;i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("Enter number you want to search\n");
    scanf("%d",&iNum);
    
    bRet=Search(ptr,iSize,iNum);
    if(bRet==true)
    {
        printf("Number contain\n");
    }
    else{
        printf("Number is not available");
    }
    free(ptr);
    
    return 0;
}