// take number from user and and return Binary number
#include<iostream>
using namespace std;

void decitoBinary(int num)
{
    int iDigit=0;
    cout<<"Binary conversion of : "<<num<<"is : "<<"\n";
    while (num!=0)
    {
        iDigit=num%2;
        cout<<iDigit;
        num=num/2;
    }
    cout<<"\n";
}
int main()
{
    int ival=0;
    int iRet=0;
    cout<<"Enter Number"<<"\n";
    cin>>ival;

    decitoBinary(ival);
    return 0;
}