#include<iostream>
using namespace std;

int addition(int n1, int n2)
{
    int Ans=0;
    Ans=n1+n2;
    return Ans;
}

int main()
{
    int A=10, B=11,iret=0;
    iret=addition(A,B);
    cout<<"Addition is "<<iret<<"\n";
    return 0;
}