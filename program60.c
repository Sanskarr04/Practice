//accept n number from user and add N numbers

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int arr[],int iLength)
{
    for(int i=0;i<iLength;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d\n",arr[i]);
        }
    }
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the elements\n");
    for (iCnt  = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements in array\n");
    for (iCnt  = 0; iCnt < iSize; iCnt++)
    {
        printf("%d",ptr[iCnt]);
    }
    
    OddDisplay(ptr,iSize);
    
    free(ptr);
    return 0;

    
}