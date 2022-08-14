#include<iostream>
#include<string>
using namespace std;
class labtask
{
private:
	string name;
	int rollno;
public:
	labtask()
	{
		cout << "Default Constructor" << endl;
	}
	labtask(string n,int r)
	{
		name = n;
		rollno = r;
	}
	friend void display(labtask obj);
};
void display(labtask obj)
{
	cout << "My name is " << obj.name << endl;
	cout << "My  rollno. is " << obj.rollno << endl;
}
int main()
{
	labtask p("Hamad",7102);
	display(p);
		system("pause");
}
