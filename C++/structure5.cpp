#include<iostream>
using namespace std;
struct student
{
	string name, address;
	float CGPA;
};
int main()
{
	student s1,s2;
	s1={"Hamad Zia","POBOX:402,Fujairah,UAE",37.5};
	cout<<"The detail of 1st student is:"<<endl;
	cout<<"Student name"<<"\t"<<"Student address"<<"\t\t\t"<<"Student CGPA"<<endl;
	cout<<s1.name<<"\t"<<s1.address<<"\t\t"<<s1.CGPA<<endl;
	cout<<"Enter the name, Address & CGPA of the second student."<<endl;
	cin>>s2.name;
	cin>>s2.address;
	cin>>s2.CGPA;
	cout<<"Details of the 2nd student are:"<<endl;
	cout<<"Student name"<<"\t"<<"Student address"<<"\t\t"<<"Student CGPA"<<endl;
	cout<<s2.name<<"\t\t"<<s2.address<<"\t\t\t"<<s2.CGPA<<endl;
	system("pause");
}
