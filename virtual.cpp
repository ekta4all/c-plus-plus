#include<iostream>

using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"\n Base class Print";
    }

     void show()
    {
        cout<<"\n Base class show";
    } };

class derived : public base
{
    public:
        void print()
    {
        cout<<"\n derived class print";
    }

    void show()
    {
        cout<<"\n derived class show";
    }};
int main()
{
base *bptr;  //base pointer always refers to the base class whether u passed the reference of derived class
derived d;
bptr=&d;
bptr->print();
bptr->show();

}























