//Check which number is smallest from the numbers
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    //Logic
    int iMin=Arr[0];
    for(int i=0;i<iLength;i++)
    {
        if(iMin>Arr[i])
        {
            iMin=Arr[i];
        }
    }
    return iMin;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
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
    
    iRet=Minimum(ptr,iSize);
    printf("Smallest element is %d",iRet);  
    free(ptr);
    
    return 0;
}