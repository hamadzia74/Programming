#include<iostream>
using namespace std;
class A
{
	public:
	    A()
		{
	     cout<<"A is Displayed."<<endl;
		}
};
class B: public A
{
	public:
		void display()
		{
          cout<<"B is Diplayed."<<endl;
		}
};
class C: public A
{
	public:
		void display()
		{
		  cout<<"C is diplayed."<<endl;
		}
};
class D: public B, public C
{
	public:
		void display()
		{
			cout<<"Public B and C are inherited in D."<<endl;
		}
};
int main()
{
	D obj;
	obj.B::display();
	obj.C::display();
	obj.D::display();
	return 0;
}
