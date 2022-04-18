#include<iostream>
using namespace std;

int main()
{

    int a,div;

    try{
    cout<<"\n Enter the value of a ";
    cin>>a;
      div=a/0;

    }catch(exception)
    {
        cout<<"\n Exception caught...u can't divide any no by zero"<<div;
    }
  /*  cout<<"\n Enter the value of b ";
    cin>>b;

    if(a>b)
        cout<<"\n a is greater ";
    else
        cout<<"\b b is greater";*/

}
