#include<iostream>
using namespace std;
class Number
{
    public:
        int iNo1;
        int iNo2;

        Number(int x, int y)
        {
            iNo1=x;
            iNo2=y;
        }
        int Maximum()
        {
            if (iNo1>iNo2)
            {
                return iNo1;
            }
            else{
                return iNo2;
            }
        }
};
int main()
{
    int iRet=0;
    int ivalue1=0;
    int ivalue2=0;
    cout<<"Enter first number: "<<"\n";
    cin>>ivalue1;

    cout<<"Enter seccond number: "<<"\n";
    cin>>ivalue2;
    Number nobj1(ivalue1,ivalue2);

    iRet=nobj1.Maximum();

    cout<<"Maximum Number is: "<<iRet<<"\n";
    cout<<"Enter first number: "<<"\n";
    cin>>ivalue1;

    cout<<"Enter seccond number: "<<"\n";
    cin>>ivalue2;
    Number nobj2(ivalue1,ivalue2);

    iRet=nobj2.Maximum();

    cout<<"Maximum Number is: "<<iRet<<"\n";

    return 0;
}