#include<iostream>

using namespace std;

class B;

class A
{
private:
    int data;

public:

    A()
    {
        data=10;
    }

    friend int cal(A,B);
};

class B
{

private:
    int data;
public:

    B()
    {
        data=20;
    }

    friend int cal(A,B);
};

int cal(A a1, B b1)
{
    return a1.data+b1.data;
}

int main()
{

    A a;
    B b;
    cout<<"\n sum is "<<cal(a,b);
}














