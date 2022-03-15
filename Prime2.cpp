#include<iostream>

using namespace std;

class PrimeTest2
{

    int i,j,k,count;

public:

    void show()
              {

            /*      for(i='A';i<='E';i++)
{
for(j='A';j<=i;j++)
{
cout<<j;
}
cout<<"\n";
} */


for(i=1;i<=5;i++)
{
for(k=4;k>=i;k--)
{
cout<<".";
}
for(j=i;j>=1;j--)
{
cout<<j;
}
cout<<"\n";
}







                 /* for(i=2;i<=100;i++)
                  {
                      count=0;
                      for(j=2;j<=i/2;j++)
                      {
                          if(i%j==0)
                          {
                          count++;
                          break;
                          }
                      }

                          if(count==0)
                            cout<<"\n"<<i;
                  }*/
                  }


};


int main()
{
    PrimeTest2 p;
    p.show();
}
