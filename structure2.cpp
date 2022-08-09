#include<iostream>
using namespace std;
struct student
{
	string name;
	int age,id;
	float CGPA;
};
int main()
{
	student s1,s2;
	s1={"Hamad Zia",19,7102,37.5};
	cout<<"The detail of 1st student is:"<<endl;
	cout<<s1.name<<"\t"<<s1.age<<"\t"<<s1.id<<"\t"<<s1.CGPA<<endl;
	cout<<"Enter the name, age, Id, & CGPA of the second student."<<endl;
	cin>>s2.name;
	cin>>s2.age;
	cin>>s2.id;
	cin>>s2.CGPA;
	cout<<"Details of the 2nd student are:"<<endl;
	cout<<"Student name"<<"\t"<<"Student age"<<"\t"<<"Student Id"<<"\t"<<"Student CGPA"<<endl;
	cout<<s2.name<<"\t\t"<<s2.age<<"\t\t"<<s2.id<<"\t\t"<<s2.CGPA<<endl;
	system("pause");
}
