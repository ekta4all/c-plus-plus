#include<iostream>

using namespace std;

class Test
{

     int *p;

    public:

        Test()
        {
            p=new int[3]{1,2,3};

            for(int i=0;i<3;i++)
            {
                cout<<p[i]<<" ";
            }
            cout<<"\n";

        }
//Memory leakage occurs in c++ when programmer allocates the memory by using new keyword and forgets to deallocate the memory
//by using delete() operator. If a program has memory leaks then its memory usage is increasing satirically since all the
//systems have limited amount of memory and memory is costly. hence it created problem.
        void show()
        {
            cout<<"\n Memory deleted now...there is no more memory leakage";
            delete(p);
        }

};

int main()
{

    Test *ptr=new Test[3];  //array of object
    ptr->show();

}




