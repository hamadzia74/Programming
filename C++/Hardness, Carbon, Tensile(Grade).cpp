#include<iostream>
using namespace std;
int main()
{
	float hardness, carbon, tensile;
	int grade;
	cout<<"Enter Hardness:"<<endl;
	cin>>hardness;
	cout<<"Enter Carbon:"<<endl;
	cin>>carbon;
	cout<<"Enter Tensile:"<<endl;
	cin>>tensile;
	if(hardness>50 && carbon<0.7 && tensile>5600)
	{
	grade = 10;
	cout<<"grade"<<grade<<endl;
	}
	else if(hardness>50 && carbon<0.7)
    {
	grade = 9;
	cout<<"grade"<<grade<<endl;
    }
	else if(carbon<0.7 && tensile>5600)
	{
	grade = 8;
	cout<<"grade"<<grade<<endl;
	}
	else if(hardness>50 && tensile>5600)
	{
	grade = 7;
	cout<<"grade"<<grade<<endl;
	}
	else if(hardness>50 || carbon<0.7 || tensile>5600)
	{
	grade = 6;
	cout<<"grade"<<grade<<endl;
	}
	else 
	{
	grade = 5;
	cout<<"grade"<<grade<<endl; 
	}
	return 0;
}
