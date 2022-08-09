#include<iostream>
using namespace std;
struct Phone
{
	int ncode;
	int acode;
	long number;
};
int main()
{
	Phone p1,p2={92, 041, 718107};
	cout<<"Enter national code:"<<endl;
	cin>>p1.ncode;
	cout<<"Enter area code:"<<endl;
	cin>>p1.acode;
	cout<<"Enter phone number:"<<endl;
	cin>>p1.number;
	cout<<"Phone Number 1: ";
	cout<<p1.ncode<<"-"<<p1.acode<<"-"<<p1.number<<endl;
	cout<<"Phone Number 2: ";
	cout<<p2.ncode<<"-"<<p2.acode<<"-"<<p2.number<<endl;
	system("pause");
}
