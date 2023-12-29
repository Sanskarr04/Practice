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
            int idigit=0;
            int sum=0;
            while (iNo!=0)
            {
                idigit=iNo%10;
                sum+=idigit;
                iNo=iNo/10;
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