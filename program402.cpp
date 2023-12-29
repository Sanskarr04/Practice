#include<iostream>
using namespace std;

//call by address
void Swap(int *no1, int *no2)
{
    int Temp;
    Temp=*no1;
    *no1=*no2;
    *no2=Temp;
}


int main()
{
    int A=10, B=11,iret=0;
    Swap(&A,&B);
    
    cout<<"Data after swapping: "<<"\n";
    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";

    return 0;
}