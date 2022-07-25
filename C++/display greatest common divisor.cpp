#include<iostream>
using namespace std;
int main()
{
	int a1,a2,d;
	cout<<"Enter first number:"<<endl;
	cin>>a1;
	cout<<"Enter second number:"<<endl;
	cin>>a2;
	if (a1<a2)
	d=a1;
	else
	d=a2;
	for(;d>=1;d--)
	{
		if (a1%d==0&&a2%d==0)
		break;
	}
	cout<<"greatest common divisor of "<<a1<<" and "<<a2<<" is "<<d<<endl;
	system("pause");
}
