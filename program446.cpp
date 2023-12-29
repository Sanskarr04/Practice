//Searching Methods

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
        bool LinearSearch(T);
        bool BiDirectionalSearch(T);
        bool BinarySearch(T);
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
template <class T>
bool ArrayX<T> :: LinearSearch(T no)
{
    bool flag=false;
    for(int i=0;i<isize;i++)
    {
        if(Arr[i]==no)
        {
            flag=true;
            break;
        }
    }
    return flag;
}
template<class T>
bool ArrayX<T>::BiDirectionalSearch(T no)
{
    bool flag=false;
    int istart=0;
    int iend=isize-1;

    while (istart <= iend)
    {
        if((Arr[istart] == no) || (Arr[iend]==no))
        {
            flag=true;
            break;
        }
        istart++;
        iend--;
    }
    return flag;
}
template<class T>
bool ArrayX<T>::BinarySearch(T no)
{
    bool flag=false;
    int iStart =0, iEnd=0, iMid=0;
    iStart=0;
    iEnd=isize-1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ( iEnd - iStart) / 2;
        if((Arr[iMid]==no) || (Arr[iStart]==no) || (Arr[iEnd]==no))
        {
            flag=true;
            break;
        }
        else if(Arr[iMid]<no)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] > no)
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
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
    cout<<"Enter the element that ypu want to search"<<"\n";
    cin>>ivalue;
    bret=obj->BinarySearch(ivalue);
    if(bret==true)
    {
        cout<<ivalue<<" is present in array"<<"\n";
    }
    else
    {
        cout<<ivalue<<" Not found"<<"\n";
    }
    cout<<"End of main"<<"\n";
    return 0;
}