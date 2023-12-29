// 

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool check(UINT n,UINT p1,UINT p2)
{
    if (p1<1 || p1>32 || p2<1 || p2>32)
    {
        cout<<"Invalid Position"<<"\n";
        return false;
    }
    
    UINT mask1=0x1;
    UINT mask2=0x1;
    
    UINT result=0;

    mask1=mask1<<(p1-1);
    mask2=mask2<<(p2-1);

    result = n & (mask1 | mask2);

    if (result == (mask1 | mask2))
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
    int val=0;
    int bit1=0;
    int bit2=0;

    bool bRet=false;
    cout<<"Enter Number number"<<"\n";
    cin>>val;

    cout<<"Enter first position"<<"\n";
    cin>>bit1;

    cout<<"Enter seccond position"<<"\n";
    cin>>bit2;
    bRet=check(val,bit1,bit2);
    if (bRet==true)
    {
        cout<<"Bit is On"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
    }
    
    return 0;

}


//  Thought works
//  Josh

