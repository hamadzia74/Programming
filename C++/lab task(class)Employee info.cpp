#include<iostream>
using namespace std;
class employee
{
	public:
		string name,date_of_joining,department,designation;
		int age;
		float salary;
	public:
		void in();
		void out();
		float annualsalary();	
};
void employee::in()
{   cout<<"**************************"<<endl;    
    cout<<"Input the Employee's Info."<<endl;
    cout<<"**************************"<<endl<<endl;
	cout<<"Enter the Name of an Employee:"<<endl;
	cin>>name;
	cout<<"Enter the Age of an Employee:"<<endl;
	cin>>age;
	cout<<"Enter the Employee's Joining Date:"<<endl;
	cin>>date_of_joining;
	cout<<"Enter the Department of an Employee:"<<endl;
	cin>>department;
	cout<<"Enter the Designation of an Employee:"<<endl;
	cin>>designation;
	cout<<"Enter the Salary of an Employee:"<<endl;
	cin>>salary;
}
void employee::out()
{
	cout<<endl;
	cout<<"*******"<<endl;
	cout<<"OUPUTS"<<endl;
	cout<<"*******"<<endl<<endl;
	cout<<"The Name of an Employee is "<<name<<"."<<endl;
	cout<<"The Age of an Employee is "<<age<<"."<<endl;
	cout<<"The Employee's Joining Date is "<<date_of_joining<<"."<<endl;
	cout<<"The Department of an Employee is "<<department<<"."<<endl;
	cout<<"The Designation of an Employee is "<<designation<<"."<<endl<<endl;
}
float employee::annualsalary()
{
	int cal;
	cal=12*salary;
	cout<<"The Annual Salary of an Employee is Rs."<<cal<<"/-"<<endl;
}
int main()
{
	employee obj;
	obj.in();
	obj.out();
	obj.annualsalary();
	return 0;
}
