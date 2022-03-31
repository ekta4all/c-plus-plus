#include<iostream.h>
#include<conio.h>
class Test
{
int a;
public:

Test()
{
a=10;
cout<<"\n Default Constructor..."<<a;
}

Test(int a)
{
cout<<"\nSingle parametrized "<<a;
}

Test(int a,int b)
{
cout<<"\n Double parametrized constructor "<<a<<" "<<b;
}

void show()
{
cout<<a;
}
};

void main()
{
clrscr();
Test t1,t2; //default constructor called automatically when an object is created
Test t3(100); //single parametrized
Test t4(2,5); //double parametrized

//t1.show();
getch();
}
