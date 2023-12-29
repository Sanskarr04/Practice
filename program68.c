//Check which number is smallest from the numbers
#include<stdio.h>
#include<stdlib.h>

void MinMax(int Arr[],int iLength)
{
    //Logic
    int iMax=Arr[0];
    int iMin=Arr[0];
    for(int i=0;i<iLength;i++)
    {
        if(iMin>Arr[i])
        {
            iMin=Arr[i];
        }
        if(iMax<Arr[i])
        {
            iMax=Arr[i];
        }
    }
    printf("Largest Element is %d",iMax);
    printf("Smallest Element is %d",iMin);
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
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
    
    MinMax(ptr,iSize);   
    free(ptr);
    
    return 0;
}