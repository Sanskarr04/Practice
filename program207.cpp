// accept number from user and oFF 7th bit.

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask=0xFFFFFFBF;
    UINT iResult=0;

    iResult=iMask & iNo;
    return iResult;   
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

