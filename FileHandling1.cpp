#include<iostream>

using namespace std;

int main()
{

    ofstream myfile("message.doc",ios::out | ios::binary);

    if(!myfile)
    {
        cout<<"\n Can't open the file";
        return;
    }

    myfile<<"\n My name is Ekta";
    myfile<<"\n I m 35 yrs old";
    myfile<<"\n I live in Delhi";

    myfile.close();
}
