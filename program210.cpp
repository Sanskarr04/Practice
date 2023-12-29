// accept number from user and oFF 7th bit.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT bit)
{
    UINT iMask=0x00000001;
    UINT iResult=0;
    iMask=iMask << (bit-1);
    iMask= ~iMask;
    iResult=iNo & iMask;

    return iResult;
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
/*
    iNo=120
    iNo=0   1   1   1   1   0   0   0

    ipos=7
    iMask= 0   0   0   0   0   0   0

    iMask=iMask<<(ipos-1)
    iMask=iMask<<(7-1)
    iMask=iMask<<(6)

    iMask= 0    1   0   0   0   0   0   0
    iMask= ~iMask
    iMask= 1    0   1   1   1   1   1   1

    iResult=iNo & iMask
    iNo     0   1   1   1   1   0   0   0
    iMask   1   0   1   1   1   1   1   1
    --------------------------------------- &
    iResult 0   0   1   1   1   0   0   0


*/

//  Thought works
//  Josh

//ds and alogo made easy by kuru manchi