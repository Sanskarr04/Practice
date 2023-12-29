// accept number from user and oFF 7th bit.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT bit)
{
    UINT iMask=0x00000001;
    UINT iResult=0;
    iMask=iMask << (bit-1);

    iResult=iMask & iNo;
    if (iMask == iResult)   //Bit is On
    {
        return iNo ^ iMask;
    }
    else
    {
        return iNo;
    }
    
}

int main()
{
    UINT val=0;
    UINT bit=0;
    UINT Ret=0;
    cout<<"Enter Number number"<<"\n";
    cin>>val;
    
    cout<<"Enter position"<<"\n";
    cin>>bit;
    Ret=OffBit(val,bit);
    cout<<"Result is "<<Ret<<"\n";
    
    return 0;

}


//  Thought works
//  Josh

