#include<iostream>
using namespace std;
class marks
{
	private:
	int a,b,c,s;
	float avg;
	public:
	void in()
	{
		cout<<"Enter the Marks of 3 Subjects:"<<endl;
		cin>>a>>b>>c;
	}
	void sum()
	{
		s=a+b+c;
		cout<<"The Sum is "<<s<<endl;
}
	void average()
	{
		avg=s/3.0;
		cout<<"The Average is "<<avg<<endl;
	}
};
int main()
{
	marks obj;
	obj.in();
	obj.sum();
	obj.average();
	system("pause");
}
