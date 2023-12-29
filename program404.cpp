#include<iostream>
using namespace std;

template<class T>
void Swap(T &no1, T &no2)
{
    T Temp;
    Temp=no1;
    no1=no2;
    no2=Temp;
}

int main()
{
    int A=10, B=11,iret=0;
    Swap(A,B);
    
    cout<<"Data after swapping: "<<"\n";
    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";

    double X=10, Y=11, result=0;
    Swap(X,Y);
    
    cout<<"Data after swapping: "<<"\n";
    cout<<"Value of X "<<X<<"\n";
    cout<<"Value of Y "<<Y<<"\n";

    return 0;
}