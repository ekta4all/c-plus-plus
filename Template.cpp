#include<iostream>

using namespace std;

template <class T>

T square(T x)
{

    T result;

    result =x*x;

    return result;
}



/*int square(int x)
{
    return x*x;
}

float square(float x)
{

    return x*x;
}

double square(double x)
{
    return x*x;
}*/

int main()
{

    int i,ii;
    float x,xx;
    double y,yy;

    i=2;
    x=2.2;
    y=3.1;

    ii=square(i);
    cout<<i<<": "<<ii<<endl;

    xx=square(x);
    cout<<x<<": "<<xx<<endl;

    yy=square(y);
    cout<<y<<": "<<yy<<endl;

}














