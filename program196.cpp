// check wheather number taken from user where its 11th bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(unsigned int num1)
{   
    UINT iMask=0X400;
    UINT iResult=0;

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
    UINT ival1=0;
    bool bRet=false;

    cout<<"Enter Number"<<"\n";
    cin>>ival1;

    bRet=CheckBit(ival1);

    if (bRet==true)
    {
        cout<<"11th bit is ON"<<"\n";
    }
    else{
        cout<<"11th bit is OFF"<<"\n";
    }
    
    return 0;
}