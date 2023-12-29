// take number from user and and return Binary number
#include<iostream>
using namespace std;

void DeciToHexa(int num1)
{
    int d=0;
    char Arr[]={'A','B','C','D','E','F'};
    cout<<"Hexadecimal conversion of: "<<num1<<"\n";
    while (num1!=0)
    {
        d=num1%16;
        if (d<=9)
        {
            cout<<d;
        }else{
            cout<<Arr[d-10];
        }
        num1=num1/16;
    }
    cout<<'\n';
    
   
}
int main()
{
    int ival1=0;
    
    cout<<"Enter Number"<<"\n";
    cin>>ival1;

    DeciToHexa(ival1);
    return 0;
}