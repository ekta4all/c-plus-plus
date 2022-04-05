#include<iostream>
using namespace std;

class base
{
public:

    virtual void show()=0;
    ;

};

class derived : public base
{

public:
    void show()
    {
        cout<<"Pure virtual function must be defined in the derived class";
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr=&d;
    bptr->show();

}
