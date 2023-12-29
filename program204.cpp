// accept number from user and oFF 7th bit.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{//   0000    0000    0000    0000    0000    0000    0100    0000
    UINT iMask=0x00000040;
    return iNo ^ iMask;
    
    
}

int main()
{
    UINT val=0;
    UINT Ret=0;
    cout<<"Enter Number number"<<"\n";
    cin>>val;
    
    Ret=OffBit(val);
    cout<<"Result is "<<Ret<<"\n";
    
    return 0;

}


//  Thought works
//  Josh

