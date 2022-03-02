#include<iostream>

using namespace std;


class Test
{

    int a,b,temp;

    public:  //mandatory

    void hello()
    {
        cout<<"hello";

    }



int i=10;
    void getdata()
    {
        cout<<"\n Enter the value of a ";
        cin>>a;

        cout<<"\n Enter the value of b ";
        cin>>b;

    }

    void showdata()
    {

        temp=a;
        a=b;
        b=temp;
        cout<<"\n a="<<a;
        cout<<"\n b="<<b;

    }
};


int main()
{

    Test test;

    test.getdata();

    test.showdata();

    test.hello();

    cout<<"\n i="<<test.i;


}


