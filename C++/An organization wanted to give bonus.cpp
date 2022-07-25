#include<iostream>
using namespace std;
int main()
{
	int male, age, basicpay;
	float bonus;
	char gender;
	cout<<"Enter your gender"<<endl;
	cin>>gender;
    cout<<"Enter your age:"<<endl;
	cin>>age;
	cout<<"Enter your basicpay:"<<endl;
	cin>>basicpay;	
if((gender =='f'||gender =='F'||gender =='m'||gender=='M') && age>40 && basicpay>30000)
{
bonus=(20.0*basicpay)/100.0;
cout<<"Bonus is:"<<bonus<<endl;
}
else if((gender == 'm' || gender == 'M') && age<40 && basicpay>20000){

bonus=(15.0*basicpay)/100.0;
cout<<"Bonus is:"<<bonus<<endl;}
else if((gender=='f'||gender=='F') && age<30 && basicpay>20000){

bonus=(10.0*basicpay);
cout<<"Bonus is:"<<bonus<<endl;}
else
cout<<"Nothing"<<endl;
system("pause");
}
