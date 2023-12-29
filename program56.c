#include<stdio.h>// i/o
#include<stdlib.h>//    Memory Management

int main()  //Entry point
{
    int iSize=0;    //  to store size of array
    int *ptr=NULL;  //  To store address of array
    int iCnt=0;     //Loop Counter


    //Step 1-> Accept number from user
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    //Step 2-> Allocate memory dynamically
    ptr=(int*)malloc(iSize*sizeof(int));

    //step 3-> Accept the value from user
    printf("Enter the elements: \n");
    for (iCnt = 0;  iCnt< iSize ;iCnt++)
    {
        scanf("%d\n",&ptr[iCnt]);
    }

    printf("Elements pf array are: \n");
    for (iCnt = 0;  iCnt< iSize ;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    return 0;      //return success to OS
}