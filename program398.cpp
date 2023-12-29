#include<iostream>
using namespace std;

int addition(int n1, int n2)
{
    int Ans=0;
    Ans=n1+n2;
    return Ans;
}

double addition(double n1, double n2)
{
    double Ans=0;
    Ans=n1+n2;
    return Ans;
}
int main()
{
    int A=10, B=11,iret=0;
    iret=addition(A,B);
    cout<<"Addition is "<<iret<<"\n";

    double x=90.7, y=78.9, result=0.0;
    result=addition(x,y);
    cout<<"addition is "<<result<<"\n";
    return 0;
}