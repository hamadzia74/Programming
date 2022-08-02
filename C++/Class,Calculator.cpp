#include<iostream>
using namespace std;
class Calculator
{
	private:
	int a,b,c;
	char op;
	public:
	void in()
	{
		cout<<"Enter First no."<<endl;
		cin>>a;
		cout<<"Enter Second no."<<endl;
		cin>>b;
		cout<<"Enter the operator:"<<endl;
		cin>>op;
	} 
	void out()
	{
	if (op=='+')
	{
	c=a+b;
	cout<<"a+b="<<c<<endl;
    }
	else if(op=='-')
    {
	c=a-b;
	cout<<"a-b="<<c<<endl;
    }
	else if(op=='*')
	{
	c=a*b;
	cout<<"a*b="<<c<<endl;
    }
	else if(op=='/')
	{
	c=a/b;
	cout<<"a/b="<<c<<endl;	
	}
	else if(op=='%')
	{
	c=a%b;
	cout<<"a%b="<<c<<endl;	
	}
}
};
	int main()
	{
		Calculator obj;
		obj.in();
		obj.out();
		system("pause");
	}
