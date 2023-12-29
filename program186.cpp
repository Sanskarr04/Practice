/*
irow=4
icol=4
*   *   *   *
*   *   *   *
*   *   *   *
*   *   *   *

*/

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;
    public:    
        Pattern(int x,int y)
        {
            iRow=x;
            iCol=y;
        }
        void Display()
        {
            int i=0,j=0;

            for ( i = 1; i <=iRow ;i++)
            {
                for(j=1;j<=iCol;j++)
                {
                    cout<<"*"<<"\t";
                }
                cout<<"\n";
            }
            
        }
};
int main()
{
    int n1=0;
    int n2=0;
    
    cout<<"Enter rows"<<"\n";
    cin>>n1;

    cout<<"Enter coloumns"<<"\n";
    cin>>n2;
    Pattern pobj(n1,n2);
    pobj.Display();
    
    return 0;
}