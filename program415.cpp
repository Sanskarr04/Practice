#include<iostream>
using namespace std;

template <class T>
struct NodeS    //S for Singly
{
    T data;
    struct NodeS *next;
};
// struct NodeD
// {
//     int data;
//     struct NodeD *next;
//     struct NodeD *prev;
// }

template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * First;      
        int icount;
};

int main()
{
    SinglyLL <int>obj1;
    return 0;
}