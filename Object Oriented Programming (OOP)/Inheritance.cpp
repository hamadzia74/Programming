#include<iostream>
using namespace std;
class shape
{
protected:
	int height, width;
public:
	shape()
	{
		height = 10;
		width = 20;
	}
};
class Rectangle:public shape
{
public:
	void Getarea()
{
	cout << "Area of Rectangle = " << height*width << endl;
}
};
class Triangle :public shape
{
public:
	void Getarea()
{
		cout << "Area of Triangle = " << 0.5*(height*width) << endl;
}
};
class Square :public shape
{
public:
	void Getarea()
	{
		cout << "Area of Square = " << height*width << endl;
	}
};
class person1
{
	public:
		string name;
		int age;
		public:
			 person1()
			{
			name="Hamad";
			age=19;	
			}
		};
		class subject1:public person1
		{
			public:
				int m1,m2;
				public:
					subject1()
					{
						m1=45;
						m2=49;
					}
					void output()
					{
			       	    cout<<"The Name of Person is "<<name<<endl;
				        cout<<"The Age of Person is "<<age<<endl;
					}
	};
	class student1:public subject1
	{
			public:
			void output()
	    {
			cout<<"Marks of 1st subject is "<<m1<<endl;
		    cout<<"Marks of 2nd Subject is "<<m2<<endl;
		}
};
class person2
{
	public:
		string name;
		int age;
		public:
			 person2()
			{
			name="Hamad";
			age=19;	
			}
		};
		class subject2
		{
			public:
				int m1,m2;
				public:
					subject2()
					{
						m1=45;
						m2=49;
					}
	};
	class student2:public person2,public subject2
	{
			public:
			void output()
	    {
		    cout<<"The Name of Person is "<<name<<endl;
	        cout<<"The Age of Person is "<<age<<endl;
			cout<<"Marks of 1st subject is "<<m1<<endl;
		    cout<<"Marks of 2nd Subject is "<<m2<<endl;
		}
};
class person3
{
	public:
		string name;
		int age,m1,m2;
		public:
			 person3()
			{
			name="Hamad";
			age=19;	
			m1=45;
			m2=49;
			}
		};
		class subject3:public person3
		{
			public:
					void output()
					{
			       	    cout<<"The Name of Person is "<<name<<endl;
				        cout<<"The Age of Person is "<<age<<endl;
					}
	};
	class student3:public person3
	{
			public:
			void output()
	    {
			cout<<"Marks of 1st subject is "<<m1<<endl;
		    cout<<"Marks of 2nd Subject is "<<m2<<endl;
		}
};
class arithmetic
{
	public:
		int x,y;
		void input()
		{
			cout<<"Enter the 1st value:"<<endl;
			cin>>x;
			cout<<"Enter the 2nd value:"<<endl;
			cin>>y;
		}
	};
	class pluse:public arithmetic
	{
		public:
			void sum()
			{
				cout<<"The Sum of Two Numbers = "<<x+y<<endl;
	        }
    };
    class minuse:public arithmetic
    {
    	public:
    		int a,b;
    	public:
    		minuse()
    		{
    			a=10;
    			b=20;
			}
    	void sub()
    	{
    		cout<<"The Subtraction of two Numbers = "<<x-y<<endl;
		}
	};
	class multiplication:public minuse
	{
		public:
		void mlty()
    	{
    		cout<<"The Multiplication of two Numbers = "<<a*b<<endl;
		}	
	};
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
	int ch;
	cout<<"Press 1 For Single Inheritance."<<endl;
	cout<<"Press 2 For Multi level Inheritance."<<endl;
	cout<<"Press 3 For Multiple Inheritance."<<endl;
	cout<<"Press 4 For Herarical Inheritance."<<endl;
	cout<<"Press 5 For Hybrid Inheritance."<<endl;
	cout<<"Press 6 For Diamond Inheritance."<<endl<<endl;
	cout<<"Enter the choice."<<endl;
	cin>>ch;
	if(ch==1)
	{
	Rectangle obj;
	Triangle obj1;
	Square obj2;
	obj.Getarea();
	obj1.Getarea();
	obj2.Getarea();
	}
	if (ch==2)
	{
	subject1 obj1;
	obj1.subject1::output();
	student1 obj;
	obj.student1::output();
    }
    else if(ch==3)
    {
   	student2 obj;
	obj.output();
	}
	else if(ch==4)
	{
	subject3 obj1;
	obj1.subject3::output();
	student3 obj;
	obj.student3::output();
	}
	else if(ch==5)
	{
	pluse obj;
	obj.input();
	obj.sum();
	minuse m;
	cout<<endl;
	m.input();
	m.sub();
    cout<<endl;
	multiplication obj1;
	obj1.mlty();
	}
	else if(ch==6)
	{
	D obj;
	obj.B::display();
	obj.C::display();
	obj.D::display();
	}
	cout<<endl;
	system("pause");
}
