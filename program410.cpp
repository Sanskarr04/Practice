#include<iostream>
using namespace std;


class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int length)
        {
            Size=length;
            Arr=new int[Size];
        }

        void Accept()
        {
            cout<<"Enter the element of array"<<"\n";
            int icnt=0;
            for(icnt=0;icnt<Size;icnt++)
            {
                cin>>Arr[icnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array"<<"\n";
            int icnt=0;
            for(icnt=0;icnt<Size;icnt++)
            {
                cout<<Arr[icnt]<<"\n";
            }
        }
};

int main()
{
    ArrayX obj(5);
    
    obj.Accept();
    obj.Display();

    return 0;
}