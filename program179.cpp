#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;
    public:
        Digit(int x)
        {
            iNo=x;
        }
        
        
};
int main()
{
    int iValue=0;
    cout<<"Enter Number: "<<"\n";
    cin>>iValue;

    Digit obj(iValue);

    return 0;
}