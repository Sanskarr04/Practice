//accept n number from user and add N numbers

#include<stdio.h>
#include<stdlib.h>

int addition(int arr[],int iLength)
{
    int iSum=0;
    for(int i=0;i<iLength;i++)
    {
        iSum=iSum+arr[i];
    }
    return iSum;
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the elements\n");
    for (iCnt= 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of array are: \n");
    for (iCnt= 0; iCnt < iSize; iCnt++)
    {
        printf("%d \n",ptr[iCnt]);
    }
    iRet=addition(ptr,iSize);
    printf("%d",iRet);
    free(ptr);
    return 0;
}