#include<iostream>

using namespace std;

class Odd
{

    int i;

public: //mandatory

    void show()
    {
        cout<<"\n Odd Series 1-10 is \n";
        for(i=1;i<=10;i+=2)
            cout<<"\n"<<i;
    }


};


class Even
{
    int i;

    public:

        void show()
        {
            cout<<"\n Even Series is \n";

            for(i=2;i<=10;i+=2)
                cout<<"\n"<<i;
        }
};


int main()
{
    Odd o;
    Even e;
    o.show();
    e.show();

}
