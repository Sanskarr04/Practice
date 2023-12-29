#include<stdio.h>
#include<stdlib.h>

void Fun(int Arr[],int iLength)
{
    //Logic
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
        printf("%d\n",&ptr[i]);
    }
    
    Fun(ptr,iSize);
    
    free(ptr);
    
    return 0;
}