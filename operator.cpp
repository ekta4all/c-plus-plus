#include<iostream>

using namespace std;

class count
{
    int value;

public:

    count()
    {

        value=5;
    }

    void operator ++()
    {

        ++value;
    }

    void display()
    {

        cout<<"\n count = "<<value;
    }
};

int main()
{
    count c;
    ++c;
    c.display();


}
