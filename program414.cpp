#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int);
        ~ArrayX();
        void Accept();

        void Display();
        
        T Max();
};
template <class T>
ArrayX<T>::ArrayX(int length)
{
    Size=length;
    Arr=new T[Size];
}
template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
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

template <class T>
T ArrayX<T>::Max()
{
    T max=Arr[0];
    for(int i=0;i<Size; i++)
    {
        if(max<Arr[i])
        {
            max=Arr[i];
        }
    }
    return max;
}

int main()
{
    ArrayX<int> obj1(5);
    
    obj1.Accept();
    obj1.Display();
    cout<<"Maximum number is"<<obj1.Max()<<"\n";

    ArrayX<double> obj2(5);
    obj2.Accept();
    obj2.Display();
    cout<<"Maximum number is"<<obj2.Max()<<"\n";
    return 0;
}