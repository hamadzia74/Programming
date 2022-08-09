#include<iostream>
using namespace std;
struct employee
{
	int cnumber;
	char grade;
	double salary;
};
 struct employee e1={5204,'A',55000};
 struct employee e2={7102,'A',56000};
int main()
{
	cout<<"Entered details of employee:"<<endl;
	cout<<"The details of 1st employee is:"<<endl;
	cout<<"Code number:"<<e1.cnumber<<endl;
	cout<<"Grade:"<<e1.grade<<endl;
	cout<<"Salary:"<<e1.salary<<endl;
	cout<<"The details of 2nd employee is"<<endl;
	cout<<"Code number:"<<e2.cnumber<<endl;
	cout<<"Grade:"<<e2.grade<<endl;
	cout<<"Salary:"<<e2.salary<<endl;
	system("pause");
}
