//

#include<stdio.h>
void Display(int iNo)
{
    int digit=0;
    //Using while loop

    // while(iNo>0)
    // {
    //     digit=iNo%10;
    //     printf("%d\n",digit);
    //     iNo=iNo/10;
    // }
    //Using For loop
    // for (; iNo!=0;)
    // {
    //     digit=iNo%10;
    //     printf("%d",digit);
    //     iNo=iNo/10;
    // }

    //By using for loop with condition in bracket

    for (;iNo!=0; iNo=iNo/10)
    {
        digit=iNo%10;
        printf("%d",digit);
        
    }
    
}

int main()
{

    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}