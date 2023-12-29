#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int size)
{
    int icnt=0;
    for ( icnt = 0; icnt < size; icnt++)
    {
        cout<<Arr[icnt]<<"\n";
    }
}


int main()
{
    int A[]={10,20,30,40,50};
    Display(A,5);

    double B[]={10.78,20.12,30.56,40.1,50.332};
    Display(B,5);
    return 0;
}