// take number from user and and return Binary number
#include<iostream>
using namespace std;

void DeciToHexa(int num1)
{
    int d=0;
    cout<<"Hexadecimal conversion of: "<<num1<<"\n";
    while (num1!=0)
    {
        d=num1%16;
        if (d<=9)
        {
            cout<<d;
        }else{
            switch (d)
            {
                case 10:
                    cout<<"A";
                    break;
                case 11:
                    cout<<"B";
                    break;
                case 12:
                    cout<<"C";
                    break;
                case 13:
                    cout<<"D";
                    break;
                case 14:
                    cout<<"E";
                    break;
                case 15:
                    cout<<"F";
                    break;
            }
        }
        num1=num1/16;
    }
    cout<<'\n';
    
   
}
int main()
{
    int ival1=0;
    
    cout<<"Enter Number"<<"\n";
    cin>>ival1;

    DeciToHexa(ival1);
    return 0;
}