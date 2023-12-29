#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int);

        void Accept();

        void Display();
        
};
template <class T>
ArrayX<T>::ArrayX(int length)
{
    Size=length;
    Arr=new int[Size];
}
template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the element of array"<<"\n";
    int icnt=0;
    for(icnt=0;icnt<Size;icnt++)
    {
        cin>>Arr[icnt];
    }
}
template <class T>
void ArrayX<T>::Display()
{
    cout<<"Elements of array"<<"\n";
    int icnt=0;
    for(icnt=0;icnt<Size;icnt++)
    {
        cout<<Arr[icnt]<<"\n";
    }
}
int main()
{
    ArrayX<int> obj(5);
    
    obj.Accept();
    obj.Display();

    return 0;
}