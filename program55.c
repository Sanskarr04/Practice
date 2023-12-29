#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];
    printf("Enter The Elements: \n");
    for(int iCnt=0;iCnt<5;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of Array are: \n");
    
    for(int iCnt=0;iCnt<5;iCnt++){
        printf("%d",Arr[iCnt]);
    }
    
    
    

    return 0;
}