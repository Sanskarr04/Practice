#include<iostream>
using namespace std;

class Array
{
    public:
        int size=0;
        int *Arr;
        Array(int iNo)
        {
            cout<<"Inside constructor"<<"\n";
            size=iNo;
            Arr=new int[size];
        }

        ~Array()
        {
            cout<<"Inside destructor"<<"\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Inside Accept method"<<"\n";
            cout<<"Enter elements"<<"\n";
            for(int i=0;i<size;i++)
            {
                cin>>Arr[i];
            }
        }
        void Dsiplay()
        {
            cout<<"Inside Display method"<<"\n";
            cout<<"Elements of An arrays are"<<"\n";
            for(int i=0;i<size;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Summation()
        {
            cout<<"Inside summation method"<<"\n";
            int sum=0;
            for (int i = 0; i < size; i++)
            {
                sum+=Arr[i];
            }
            return sum;
            
        }
};
int main()
{
    cout<<"Inside main"<<"\n";
    int ino=0;
    int iRet=0;
    cout<<"Enter number of elements"<<"\n";
    cin>>ino;

    Array aobj(ino);
    aobj.Accept();
    aobj.Dsiplay();
    
    iRet=aobj.Summation();

    cout<<"Addition of numbers from array is"<<iRet<<"\n";
    return 0;
}