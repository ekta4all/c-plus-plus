#include<iostream>

using namespace std;

class Test
{
    //int add;
public:

    int sum(int a,int b)
    {
    //    add=a+b;
        return a+b;
    }

    int sum(int a,int b,int c)
    {

     //   add=a+b+c;
        return a+b+c;
    }

    float sum(float a ,float b)
    {
      // float add=a+b;
        return a+b;

    }
};


int main()
{
    Test t;
    cout<<"\n Sum of 2 integer is "<<t.sum(10,20);
    cout<<"\n Sum of 3 integer is "<<t.sum(10,20,30);
    cout<<"\n Sum of 2 float is "<<t.sum(10.5f,20.2f);


}
