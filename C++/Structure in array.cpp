#include<iostream>
using namespace std;
struct student 
{
	string name;
	int marks[5];
	int rollno;
}std1,std2,std3;
int main()
{
	float avg1,avg2,avg3;
	int sum1=0,sum2=0,sum3=0;
	cout<<"Enter the name of 1st student:"<<endl;
	cin>>std1.name;
	cout<<"Enter the rollno. of 1st student:"<<endl;
	cin>>std1.rollno;
	for(int i=1;i<=4;i++)
	{
	cout<<"Enter the marks of 1st student:"<<endl;
	cin>>std1.marks[i];
	sum1+=std1.marks[i];
	cout<<"The sum is:"<<sum1<<endl;
	avg1=sum1/5;
	}
    cout<<"The average of 1st student is:"<<avg1<<endl<<endl;
	cout<<"Enter the name of 2nd student:"<<endl;
	cin>>std2.name;
	cout<<"Enter the rollno. of 2nd student:"<<endl;
	cin>>std2.rollno;
	for(int j=1;j<=4;j++)
	{
	cout<<"Enter the marks of 2nd student:"<<endl;
	cin>>std2.marks[j];
	sum2+=std2.marks[j];
	cout<<"The sum is:"<<sum2<<endl;
	avg2=sum2/5;
	}
    cout<<"The average of 2nd student is:"<<avg2<<endl<<endl;
   	cout<<"Enter the name of 3rd student:"<<endl;
	cin>>std3.name;
	cout<<"Enter the rollno. of 3rd student:"<<endl;
	cin>>std3.rollno;
	for(int k=1;k<=4;k++)
	{
	cout<<"Enter the marks of 3rd student:"<<endl;
	cin>>std3.marks[k];
	sum3+=std3.marks[k];
	cout<<"The sum is:"<<sum3<<endl;
    avg3=sum1/5;
	}
    cout<<"The average of 3rd student is:"<<avg3<<endl<<endl;
    if(avg1>avg2 && avg1>avg3)
    {
    cout<<"The highest average is:"<<avg1<<endl;
    }
    else if(avg2>avg1 && avg2>avg3)
    {
    cout<<"The highest average is:"<<avg2<<endl;
    }
	else
	{
    cout<<"The highest average is:"<<avg3<<endl;
    }
    system("pause");
}
