// check wheather number taken from user where its 3rd bit is on or off
#include<iostream>
using namespace std;

bool CheckBit(int num1)
{
    int iMask=4;
    int iResult=0;

    iResult=num1 & iMask;

    if (iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ival1=0;
    bool bRet=false;

    cout<<"Enter Number"<<"\n";
    cin>>ival1;

    bRet=CheckBit(ival1);

    if (bRet==true)
    {
        cout<<"3rd bit is ON"<<"\n";
    }
    else{
        cout<<"3rd bit is OFF"<<"\n";
    }
    
    return 0;
}