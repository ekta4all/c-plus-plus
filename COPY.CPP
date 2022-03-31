#include<iostream.h>
#include<conio.h>

class copy
{

    int x,y;

public:
	    //c3=100   200   c4= 10 20
    copy(int x1,int y1) //parametrized constructor
    {
	x=x1;    //100       10
	y=y1;   //200        20
    }

    copy(copy &c2) //copy constructor
    {
	x=c2.x; //100
	y=c2.y; //112
    }

    int getx()
    {
	return x;
    }

    int gety()
    {
	return y;
    }

    ~copy()
    {
    cout<<"\n Destructor"; //destroy the memory that is allocated by the constructor
    }
};


void main()
{
    clrscr();
    copy c3(100,200);//calls parametrized constructor
    cout<<"\n Before Copy constructor values are \n";
    copy c4(10,20);
       cout<<"\n\t c4.x= "<<c4.getx()<<"\t c4.y= "<<c4.gety();
     c4=c3; //calls copy constructor

    cout<<"\n\t c3.x= "<<c3.getx()<<"\t c3.y= "<<c3.gety();   // 100 200
    cout<<"\n After copy constructor values are \n";
    cout<<"\n\t c4.x= "<<c4.getx()<<"\t c4.y= "<<c4.gety();
getch();
}
