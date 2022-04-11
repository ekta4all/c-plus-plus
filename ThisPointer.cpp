#include<iostream>

using namespace std;

class Myclass
{

    int data;

public:
    Myclass()
    {

        data=10;
    }

    void print1();
    void print2();
};

void Myclass::print1()
{
    cout<<"Data="<<data;

}

void Myclass::print2()
{

    cout<<"\n My address "<<this;
    cout<<"\n Data="<<this->data;
}

int main()
{

    Myclass m;
    m.print1();
    m.print2();

}













