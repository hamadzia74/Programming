#include<iostream>
using namespace std;
class Student
{
	private:
	string name;
	string rno;
	int marks[5],sum;
	float avg;
	public:	
	void input()
	{
		cout<<"Enter Student Name: "<<endl;
		cin>>name;	
		cout<<"Enter Student Roll Number: "<<endl;
		cin>>rno;	
		for(int i=0;i<5;i++)
	
		{
		cout<<"Enter Marks:"<<endl;
		cin>>marks[i];
	    }
	}
	void Sum()
	{
		for(int j=0;j<5;j++)
		{
		sum=sum+marks[j];
	    }
	}
	void Average()
	{
		avg=sum/5.0;
	}
		void output()
	{
		cout<<"Student Name is: "<<name<<endl;
		cout<<"Student Roll NO.: "<<rno<<endl;
		cout<<"Total Marks are: "<<sum<<endl;
		cout<<"Average Marks are: "<<avg<<endl;
	}
};
int main()
{
	Student s1,s2,s3,s4,s5;
	cout<<"Enter record of 1st Student:"<<endl<<endl;
	s1.input();
	s1.Sum();
	s1.Average();
	cout<<endl<<"Enter record of 2nd Student:"<<endl<<endl;
	s2.input();
	s2.Sum();
	s2.Average();
	cout<<endl<<"Enter record of 3rd Student:"<<endl<<endl;
	s3.input();
	s3.Sum();
	s3.Average();
	cout<<endl<<"Enter record of 4th Student:"<<endl<<endl;
	s4.input();
	s4.Sum();
	s4.Average();
	cout<<endl<<"Enter record of 5th Student:"<<endl<<endl;
	s5.input();
	s5.Sum();
	s5.Average();
	cout<<endl<<"Record of 1st Student:"<<endl<<endl;
	s1.output();
	cout<<endl<<"Record of 2nd Student:"<<endl;
	s2.output();
	cout<<endl<<"Record of 3rd Student:"<<endl;
	s3.output();
	cout<<endl<<"Record of 4th Student:"<<endl;
	s4.output();
	cout<<endl<<"Record of 5th Student:"<<endl;
	s5.output();
	return 0;
}
