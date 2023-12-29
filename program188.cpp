// take number from user and and return Binary number
#include<iostream>
using namespace std;

void DisplayBinarytoDeci(int num1,int num2)
{
    int iRes=0;
    iRes=num1 & num2;
    cout<<"Result of & is :"<<iRes<<"\n";
    
    iRes=num1 | num2;
    cout<<"Result of | is :"<<iRes<<"\n";
    
    iRes=num1 ^ num2;
    cout<<"Result of ^ is :"<<iRes<<"\n";
}
int main()
{
    int ival1=0, ival2=0;
    
    cout<<"Enter Number"<<"\n";
    cin>>ival1;

    cout<<"Enter Number"<<"\n";
    cin>>ival2;

    DisplayBinarytoDeci(ival1,ival2);
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.


// void calculate_the_maximum(int n, int k) {
//   //Write your code here.
//   int r = 0;
//   r = n & k;
//   printf("%d\n",r);
//   r = n | k;
//   printf("%d\n",r);
//   r = n ^ k;
//   printf("%d\n",r);
// }

// int main() {
//     int n, k;
  
//     scanf("%d %d", &n, &k);
//     calculate_the_maximum(n, k);
 
//     return 0;
// }
