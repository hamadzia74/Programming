#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter the value of divider"<<endl;
	cin>>a;
	cout<<"enter the value of divisor"<<endl;
	cin>>b;
	c=b/a;
	cout<<"display the result after dividing"<<endl;
	d=b-a*c;
	cout<<"the value of divider is="<<a<<endl;
	cout<<"the value of divisoris="<<b<<endl;
	cout<<"the value of quotient is="<<c<<endl;
	cout<<"the value of reminder is="<<d<<endl;
	system("pause");
}
