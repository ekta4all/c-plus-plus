#include<iostream>

using namespace std;

class Complex
{
    double real,imag;

public:

    explicit Complex(double r=2.5,double i=3.2)
    {
        real=r;
        imag=i;
    }

    bool operator ==(Complex c)
    {
        return(real==c.real &&imag==c.imag?true:false);
    }
};

int main()
{

    Complex comp(2.5,3.2);

    if(comp==(Complex)2.5)
        cout<<"\n Same ";
    else
        cout<<"\n Not Same";




}
