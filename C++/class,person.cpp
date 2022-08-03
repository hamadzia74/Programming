#include<iostream>
using namespace std;
class person
{
	private:
	string person_name,person_address;
	string person_phone;
	public:
	void in()
	{
		cout<<"**********************"<<endl;
		cout<<"       INPUTS!        "<<endl;
		cout<<"**********************"<<endl;
		cout<<"Enter the person name:"<<endl;
		cin>>person_name;
		cout<<"Enter the person address:"<<endl;
		cin>>person_address;
		cout<<"Enter the person phone number:"<<endl;
		cin>>person_phone;
	}
	void out()
	{
		cout<<"**********************"<<endl;
		cout<<"       OUTPUTS!        "<<endl;
		cout<<"**********************"<<endl;
		cout<<"The Person's Name is "<<person_name<<endl;
		cout<<"The Person's Address is "<<person_address<<endl;
		cout<<"The Person's Phone Number is "<<person_phone<<endl;
		cout<<endl;
	}
};
int main()
{
	person obj;
	obj.in();
	obj.out();
	system("pause");
}
