// accept position and number from user and check that position bit is on or off.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT num1,UINT pos)
{   
    UINT iMask=0x1;
    UINT iResult=0;

    if (pos<1 || pos>32)
    {
        cout<<"Invalid Position"<<"\n";
        return false;
    }
    
    iMask=iMask<<(pos-1);
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
    UINT bit=0;
    bool bRet=false;

    cout<<"Enter Number"<<"\n";
    cin>>ival1;

    cout<<"Enter bit Position (1 to 32)"<<"\n";
    cin>>bit;
    bRet=CheckBit(ival1,bit);

    if (bRet==true)
    {
        cout<<"bit is ON"<<"\n";
    }
    else{
        cout<<"bit is OFF"<<"\n";
    }
    
    return 0;
}
/*
    (0   0   0   1)   (0   0   0   0)   (1   0   0   0)
                9th                     4th    
*/