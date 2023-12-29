//Sorting Methods

#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int isize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        void BubbleSortEfficient();
        void SelectionSort();
};
template<class T>
ArrayX<T>::ArrayX(int ino)
{
    cout<<"Inside constructor"<<"\n";
    this->isize=ino;
    this->Arr=new T[isize];
}
template<class T>
ArrayX<T>:: ~ArrayX()
{
    cout<<"Inside destructor to dealocate the memory"<<"\n";
    delete []Arr;
}
template<class T>
void ArrayX<T>:: Accept()
{
    cout<<"Inside accept"<<"\n";
    cout<<"Enter elements"<<"\n";
    for(int i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
}
template<class T>
void ArrayX<T>:: Display()
{
    cout<<"Inside Dispplay"<<"\n";
    cout<<"Elements of array are"<<"\n";
    for(int i=0;i<isize;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}
template<class T>
void ArrayX<T>::BubbleSortEfficient()
{
    T temp;
    bool flag=false;
    int i = 0, j = 0;
    for(i=0;i<isize;i++)
    {
        flag=false;
        for(j=0;j<isize-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
                flag=true;
            }
        }
        if(flag==false)
        {
            break;
        }
        cout<<"Data After Pass: "<<i+1<<"\n";
        Display();
    }
}
template<class T>
void ArrayX<T>::SelectionSort()
{
    int i=0,j=0, min_index=0;
    T temp;
    for(i = 0;i < isize-1;i++)
    {
        min_index=i;
        for(j=i+1;j< isize;j++)
        {
            if(Arr[j]<Arr[min_index])
            {
                min_index=j;
            }
        }
        temp=Arr[i];
        Arr[i]=Arr[min_index];y
        Arr[min_index]=temp;
    }
}
int main()
{
    cout<<"inside main"<<"\n";
    int ivalue=0;
    cout<<"Enter size of array"<<"\n";
    cin>>ivalue;
    bool bret=false;
    ArrayX <int> *obj=new ArrayX<int>(ivalue);
    obj->Accept();
    obj->Display();
    obj->SelectionSort();
    cout<<"Data after Sorting is: \n";
    obj->Display();
    delete obj;
    return 0;
}