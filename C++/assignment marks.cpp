#include<iostream>
using namespace std;
int main()
{
    cout<<"total marks of all subjects are=300"<<endl;
	float a,t;
	cout<<"please enter the marks obtained in ENGLISH"<<endl;
	cin>>a;
	t=300;
	cout<<"obtained marks in ENGLISH="<<a<<endl;
	
	float b;
	cout<<"please enter the marks obtained in PHYSICS"<<endl;
	cin>>b;
	cout<<"obtained marks in PHYSICS="<<b<<endl;
	
	float c,d;
	cout<<"please enter the marks obtained in MATHEMATICS"<<endl;
	cin>>c;
	d=a+b+c;
	
	cout<<"obtained marks in MATHEMATICS="<<c<<endl;
	cout<<endl;
	cout<<"after adding the marks of all subjects="<<a+b+c<<endl;
	cout<<endl;
	cout<<"average marks obtained="<<d/3<<endl;
	cout<<endl;
	cout<<"pecentage of all marks="<<(d/t)*100<<"%"<<endl;
	cout<<endl;
	return 0;
	
}
