// accept number from user and oFF 7th bit.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask=0x00000040;
    UINT Result=0;
    Result=iNo ^ iMask;
    return Result;
}

int main()
{
    UINT val=0;
    UINT Ret=0;
    cout<<"Enter Number number"<<"\n";
    cin>>val;
    
    Ret=ToggleBit(val);
    cout<<"Result is "<<Ret<<"\n";
    
    return 0;

}


//  Thought works
//  Josh

