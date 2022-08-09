#include<iostream>
using namespace std;
struct employee
{
	string name;
	int age;
	double salary;
};
 struct employee e1={"Fahad",19,55000};
 struct employee e2={"Zia",21,56000};
int main()
{
	cout<<"Entered details of employee:"<<endl;
	cout<<"The details of 1st employee are:"<<endl;
	cout<<e1.name<<endl;
	cout<<e1.age<<endl;
	cout<<e1.salary<<endl;
	cout<<"The details of 2nd employee are"<<endl;
	cout<<e2.name<<endl;
	cout<<e2.age<<endl;
	cout<<e2.salary<<endl;
	system("pause");
}
