#include <iostream.h>
#include <conio.h>
class stud
{
private:
	int s_no;
public:
	stud()
	{
		cout<<"Default constructor called...\n";
	}
	stud(int s_no)
	{
		cout<<"Stud class constructor...\n";
		this->s_no=s_no;
	}
} ;
class marks:public stud
{
private:
	int er_no;
public:
	marks(int er_no,int no)
	{
		stud::stud(no);					//*****________*****//
		this->er_no=er_no;
		cout<<"Base class constructor called..\n";
	}
} ;

void main()
{
	marks ob1(10,20);
	getch();
}
