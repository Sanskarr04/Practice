#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

        Digit(int x)
        {
            iNo=x;
        }
        int sumDigit()
        {
            int iTemp=iNo;//We've to take copy of iNo because after executing code iNo will get 0.
            int idigit=0;
            int sum=0;
            while (iTemp!=0)
            {
                idigit=iTemp%10;
                sum+=idigit;
                iTemp=iTemp/10;
            }
            return sum;
            
        }
        
};
int main()
{
    int iValue=0;
    int iret=0;
    cout<<"Enter Number: "<<"\n";
    cin>>iValue;

    Digit obj(iValue);
    iret=obj.sumDigit();
    cout<<"Sum of digits: "<<iret<<"\n";
    return 0;
}