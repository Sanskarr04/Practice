#include<iostream>
using namespace std;


template<class T>   //Template Header
T addition(T n1, T n2)
{
    T Ans;          //Removed ans=0 because the default value cant be predict
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