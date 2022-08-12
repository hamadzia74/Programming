#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout<<"Enter the value a:"<<endl;
	cin>>a;
	cout<<"Enter the value b:"<<endl;
	cin>>b;
	try
	{
		if(b==0)
		throw b;
		else if(b<0)
		throw "b cannot be negative";
		else
		c=a/b;
	    cout<<"The result of a/b is "<<c<<endl;
	}
	catch(int b)
	{
		cout<<"b cannot be zero."<<endl;
	}
	catch (const char *msg)
	{
		cout<<msg<<endl;
	}
	system("pause");
}
