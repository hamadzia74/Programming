#include<iostream>
using namespace std;
struct student 
{
	string name;
	int marks[5];
	int rollno;
}stu[3];
int main()
{
	float avg[3];
	int sum[3],i;
	for(i=0;i<3;i++)
	{
	cout<<"Enter the name of "<<i+1<<" student:"<<endl;
	cin>>stu[i].name;
	cout<<"Enter the rollno. of "<<i+1<<" student:"<<endl;
	cin>>stu[i].rollno;
	for(int j=0;j<5;j++)
	{
	cout<<"Enter the marks of "<<i+1<<" student:"<<endl;
	cin>>stu[i].marks[i];
	sum[i]+=stu[i].marks[i];
	avg[i]=sum[i]/5;
	}
	cout<<"The sum of "<<i+1<<" student:"<<sum[i]<<endl;
    cout<<"The average of "<<i+1<<" student is:"<<avg[i]<<endl;
}

    if(avg[1]>avg[2] && avg[1]>avg[3])
    {
    cout<<"The highest average is:"<<avg[1]<<endl;
    }
    else if(avg[2]>avg[1] && avg[2]>avg[3])
    {
    cout<<"The highest average is:"<<avg[2]<<endl;
    }
	else
	{
    cout<<"The highest average is:"<<avg[3]<<endl;
    }
    system("pause");
}
