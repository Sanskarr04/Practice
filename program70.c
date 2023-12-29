//Check which number is smallest from the numbers
#include<stdio.h>
#include<stdlib.h>

#define NOT_FOUND -1
int SearchFirstOccurance(int Arr[],int iLength, int inum)
{
    int iNum=0;
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==inum)
        {
            break;
        }
    }
    if(i==iLength)
    {
        return NOT_FOUND;
    }
    else{
        return i;
    }
    
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iNum=0;
    int iRet=0;
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
    
    iRet=SearchFirstOccurance(ptr,iSize,iNum);
    if(iRet==NOT_FOUND)
    {
        printf("There is no Such element found\n");
    }
    else{
        printf("%d is the index of that Number",iRet);
    }
    free(ptr);
    
    return 0;
}