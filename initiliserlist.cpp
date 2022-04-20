#include<iostream>

using namespace std;

class Point
{
    int x,y;

public:
    Point(int i=0,int j=0):x(i),y(j)
    {
        //this is the use of initializer list is optional as the constructor written below
    }

    //or
    //Point(int i=0,int j=0)
    //{
    //x=i;
    //y=j;
    //}

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};


int main()
{

    Point t1(10,15);

    cout<<"\n x="<<t1.getX();
    cout<<"\n y="<<t1.getY();
}









