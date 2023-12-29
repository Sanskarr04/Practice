//accept n number from user and add N numbers

#include<stdio.h>
#include<stdlib.h>

float Average(int arr[],int iLength)
{
    int iSum=0;
    for(int i=0;i<iLength;i++)
    {
        iSum=iSum+arr[i];
    }
    return (float)(iSum/iLength);
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    float iRet=0.0f;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("enter the elements\n");
    for (iCnt  = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    for (iCnt  = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=Average(ptr,iSize);
    printf("%f",iRet);
    free(ptr);
    return 0;

    
}