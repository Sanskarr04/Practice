#include<iostream>
using namespace std;

template <class T>
T Max(T Arr[], int size)
{
    int icnt=0;
    T max=Arr[0];
    for ( icnt = 0; icnt < size; icnt++)
    {
        if(max<Arr[icnt])
        {
            max=Arr[icnt];
        }
    }
    return max;
}


int main()
{
    int A[]={10,20,30,40,50};
    int ret=0;
    ret=Max(A,5);
    cout<<"Addition is: "<<ret<<"\n";
    double B[]={10.78,20.12,30.56,40.1,50.332};
    double r=0.0;
    r=Max(B,5);
    cout<<"Addition is: "<<r<<"\n";
    return 0;
}