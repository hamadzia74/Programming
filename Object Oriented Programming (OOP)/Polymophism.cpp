/* Create  a  Class Name with Person & take the name, cnic, address & store in the variables after that make parameterized constructors initialize the variables
& make two function first is getinfo & second is showinfo & after that make another two class student & teacher & take the student roll no & class in the 
variables & all other things are inherited from previous class & after that create another function with same name showinfo & getinfo for student & teacher but 
different in different classes in easy way just implement the concept of polymorphism.
*/
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	public:
		string add;
		double cnic;
		string name;
		virtual void getinfo()
		{
		cout<<"Enter Person's Information:"<<endl;
		
		cout<<"Enter Name:"<<endl;
		cin>>name;
		cout<<"Enter CNIC:"<<endl;
		cin>>cnic;	
		cout<<"Enter Address:"<<endl;
		cin>>add;
		}
		virtual void showinfo()
		{
		cout<<"Person's Information:"<<endl;
		cout<<"Name is "<<name<<endl;
		cout<<"CNIC is "<<cnic<<endl;	
		cout<<"Address is "<<add<<endl;
		}
};
// Function Overriding
// Function name same with same parameters in different
class student:public person
{
	public:
		int rollno, marks;
		string clas;
		void getinfo()
		{   
		cout<<"Student Information:"<<endl;
		person::getinfo();
			cout<<"Enter Roll No."<<endl;
			cin>>rollno;
			cout<<"Enter marks:"<<endl;
			cin>>marks;
			cout<<"Enter Class Name:"<<endl;
			cin>>clas;
		}
			 void showinfo()
		{
			cout<<"The Output of Student is"<<endl;
			person::showinfo();
		cout<<"Student's Info is"<<endl;
		cout<<"Roll number is "<<rollno<<endl;
		cout<<"Marks are "<<marks<<endl;	
		cout<<"Class Name is "<<clas<<endl<<endl;
		}
};
class teacher:public person
{
	public:
		string dept, qualification;
		int teacherid;
		void getinfo()
		{  
		cout<<"Teacher Information:"<<endl;
		person::getinfo();
			cout<<"Enter the ID of Teacher:"<<endl;
			cin>>teacherid;
			cout<<"Enter Department Name:"<<endl;
			cin>>dept;
			cout<<"Enter Qualification:"<<endl;
			cin>>qualification;
		}
			 void showinfo()
		{
		cout<<"The Output of Teacher is"<<endl;
		person::showinfo();
		cout<<"Teacher's Info is"<<endl;
		cout<<"ID is "<<teacherid<<endl;
		cout<<"Department Name is "<<dept<<endl;	
		cout<<"Qualification is "<<qualification<<endl;
		}
};
int main()
{
	person *p;
	person p1;
	p=&p1;
	p->getinfo();
    p->showinfo();
	student s;
		p=&s;
	p->getinfo(); // person class
	p->showinfo();
	teacher t;
    p=&t;
    p->getinfo();
    p->showinfo();
	system("pause");
}
