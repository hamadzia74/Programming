#include<iostream>
using namespace std;
class shape
{
	public:
		int height, width,result;
		void getArea()
	{
		cout<<"Enter Height:"<<endl;
		cin>>height;
		cout<<"Enter Width:"<<endl;
		cin>>width;
	}
	void showArea()
	{
		cout<<"Area = "<<result<<endl;
 	}
};
class triangle:public shape
{
	int r;
	void getArea()
	{
		shape::getArea();
	    r=0.5*height*width;
	}
	void showArea()
	{
		cout<<"Area = "<<r<<endl;
	}
};
class rectangle:public shape
{
	int c;
	void getArea()
	{
		shape::getArea();
	    c=height*width;
	}
	void showArea()
	{
		cout<<"Area of Rectangle = "<<c<<endl;
	}
};
int main()
{
	system("CLS");
	shape *s;
	shape sh;
	s=&sh;
	s->getArea();
	s->showArea();
	triangle t;
	s=&t;
	s->getArea();
	s->showArea();
	rectangle rec;
	s=&rec;
	s->getArea();
	s->showArea();
	
}
