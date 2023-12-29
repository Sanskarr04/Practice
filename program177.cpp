#include<iostream>
using namespace std;

class Array
{
    public:
        int size=0;
        int *Arr;
        Array(int iNo)
        {
            size=iNo;
            Arr=new int[size];
        }

        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter elements"<<"\n";
            for(int i=0;i<size;i++)
            {
                cin>>Arr[i];
            }
        }
        void Dsiplay()
        {
            cout<<"Elements of An arrays are"<<"\n";
            for(int i=0;i<size;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        
};
int main()
{
    int ino=0;
    cout<<"Enter number of elements"<<"\n";
    cin>>ino;

    Array aobj(ino);
    aobj.Accept();
    aobj.Dsiplay();
    
    return 0;
}