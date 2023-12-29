// check wheather number taken from user where its 4th & 9th bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(unsigned int num1)
{   
    UINT iMask=0X108;
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
        cout<<"9th & 4th bit is ON"<<"\n";
    }
    else{
        cout<<"9th & 4th bit is OFF"<<"\n";
    }
    
    return 0;
}
/*
    (0   0   0   1)   (0   0   0   0)   (1   0   0   0)
                9th                     4th    
*/