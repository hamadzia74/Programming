#include<iostream>
using namespace std;
struct book
{
	string name;
	double page;
	float price;
};
int main()
{
	book b1,b2;
	cout<<"Enter the Name, page & price of book 1"<<endl;
	cin>>b1.name;
	cin>>b1.page;
	cin>>b1.price;
	cout<<"Enter the Name, page & price of book 2"<<endl;
	cin>>b2.name;
	cin>>b2.page;
	cin>>b2.price;
	if(b1.price>b2.price)
	cout<<"Highest price is "<<b1.price<<" which of the 1st book."<<endl;
	else 
	cout<<"Highest price is "<<b2.price<<" which of the 2nd book."<<endl;
	system("Pause");
}
