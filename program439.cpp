#include<iostream>
using namespace std;


class ArrayX
{
    public:
        int *Arr;
        int isize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        
};
ArrayX::ArrayX(int ino)
{
    cout<<"Inside constructor"<<"\n";
    this->isize=ino;
    this->Arr=new int [isize];
}
ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor to dealocate the memory"<<"\n";
    delete []Arr;
}

void ArrayX :: Accept()
{
    cout<<"Inside accept"<<"\n";
    cout<<"Enter elements"<<"\n";
    for(int i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX :: Display()
{
    cout<<"Inside Dispplay"<<"\n";
    cout<<"Elements of array are"<<"\n";
    for(int i=0;i<isize;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";

}

int main()
{
    cout<<"inside main"<<"\n";
    int ivalue=0;
    cout<<"Enter size of array"<<"\n";
    cin>>ivalue;
    ArrayX obj(ivalue);
    obj.Accept();
    obj.Display();
    cout<<"End of main"<<"\n";
    return 0;
}