// Polymorphism: +, -, *, /, % Operator Overloading
#include<iostream>
using namespace std;
class person
{
	public:
		int a, b;
		public:
		    person()
			{
			 a=0;
		     b=0;	
			}
			person(int c, int d)
			{
			 a=c;
		     b=d;	
			}
			void display()
			{
				cout<<"The value of a is "<<a<<endl;
				cout<<"The value of b is "<<b<<endl;
			}
			person operator +(person p)
			{
				person p1;
				p1.a = a + p.a;
				p1.b = b + p.b;
			    return p1;
			}
			person operator -(person p)
			{
				person p1;
				p1.a = a - p.a;
				p1.b = b - p.b;
			    return p1;
			}
			person operator /(person p)
			{
				person p1;
				p1.a = a / p.a;
				p1.b = b / p.b;
			    return p1;
				}
			    person operator %(person p)
			{
				person p1;
				p1.a = a % p.a;
				p1.b = b % p.b;
			    return p1;
				}
				 person operator *(person p)
			{
				person p1;
				p1.a = a * p.a;
				p1.b = b * p.b;
			    return p1;
				}
};
int main()
{
	system("cls");
	char op;
	cout<<"Enter Oprator:"<<endl;
	cin>>op;
	if(op=='+')
	{
		person p3(12,15) , p4(30,19);
		person p5;
		p5=p3+p4;
		p5.display();
	}
	else if(op=='-')
	{
		person p3(12,15) , p4(30,19);
		person p5;
		p5=p3-p4;
		p5.display();
	}
	else if(op=='*')
	{
		person p3(12,15) , p4(30,19);
		person p5;
		p5=p3*p4;
		p5.display();
	}
 	else if(op=='/')
	{
		person p3(12,15) , p4(30,19);
		person p5;
		p5=p3/p4;
		p5.display();
	}
	else if(op=='%')
	{
		person p3(12,15) , p4(30,19);
		person p5;
		p5=p3%p4;
		p5.display();
	}
    else 
    {
    	cout<<"Invalid Operator!"<<endl;
	}
    system("pause");
}
