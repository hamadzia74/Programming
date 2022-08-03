#include<iostream>
using namespace std;
class Patient
{
	private:
	int CNIC;
	string name;
	string disease;
	public:
	void set();
	void display();
};
void Patient::set()
{
	cout<<"CNIC:"<<endl;
	cin>>CNIC;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter Disease:"<<endl;
	cin>>disease; 
}
void Patient::display()
{
	cout<<"CNIC Number of the patient is: "<<CNIC<<endl;
	cout<<"Name of the Patient is: "<<name<<endl;
	cout<<"Disease of the Patient is: "<<disease<<endl;
}
int main()
{
	int a[3];
	Patient p1,p2,p3;
	cout<<"Record of 1st Patient"<<endl;
	p1.set();
	cout<<"Record of 2nd Patient"<<endl;
	p2.set();
	cout<<"Record of 3rd Patient"<<endl;
	p3.set();
	for(int i=0;i<3;i++)
	{
		cout<<"Enter age of a "<<i+1<<" Patient:"<<endl;
		cin>>a[i];
	}
	if(a[0]<20)
	p1.display();
	else if(a[1]<20)
	p2.display();
	else if(a[2]<20)
	p3.display();
	else
	cout<<"Invalid Age!"<<endl;
	return 0;
}
