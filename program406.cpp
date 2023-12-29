#include<iostream>
using namespace std;

void Display(int Arr[], int size)
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

    return 0;
}