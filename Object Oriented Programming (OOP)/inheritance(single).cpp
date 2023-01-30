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
int main()
{
	Rectangle obj;
	Triangle obj1;
	Square obj2;
	obj.Getarea();
	obj1.Getarea();
	obj2.Getarea();
	system("pause");
}
