#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float weightinkg, BMI, heightinfeet, heightInMeters;
	cout<<" enter weight in kilograms"<<endl;
	cin>>weightinkg;
	cout<<"enter the height in feet"<<endl;
	cin>>heightinfeet;
	heightInMeters=heightinfeet*0.3048;
	cout<<"height in meters"<<endl<<heightInMeters<<endl;
	BMI=weightinkg/pow(heightInMeters,2);
	cout<<"BMI="<<BMI<<endl;
	if (BMI<18.5)
	{
	cout<<"you are Underweight"<<endl;
	}
	else if (BMI>18.5 && BMI<24.9)
    { 
	cout<<"You are Normal"<<endl;
	}
	else if (BMI>25 && BMI<29.9)
	{
	cout<<"You are Overweight"<<endl;
	}
	else if (BMI>30)
	{
	cout<<"You are Obeese"<<endl;
	}
	else
	cout<<"Nothing"<<endl;
	system("pause");
}
