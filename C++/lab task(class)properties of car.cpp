#include<iostream>
using namespace std;
class car
{
	private:
	string brand;
	int modelno;
	int long no_oftraveled_miles;
	string color;
	public:
		void in();
		void out();
	};
	void car::in()
	{
		cout<<"*******************************"<<endl;
		cout<<"Input the properties of the Car"<<endl;
		cout<<"*******************************"<<endl<<endl;
		cout<<"Enter the Brand of the Car:"<<endl;
		cin>>brand;
		cout<<"Enter the model numbaer of the Car:"<<endl;
		cin>>modelno;
		cout<<"Enter the Number of Traveled Miles of the Car:"<<endl;
		cin>>no_oftraveled_miles;
		cout<<"Enter the Color of The Car:"<<endl;
		cin>>color;
	}
	void car::out()
	{   
	    cout<<endl;
        cout<<"**************************"<<endl;
		cout<<"The properties of the Car"<<endl;
		cout<<"**************************"<<endl<<endl;
		cout<<"The Brand of the Car = "<<brand<<endl;
		cout<<"The model numbaer of the Car = "<<modelno<<endl;
		cout<<"The Number of Traveled Miles of the Car = "<<no_oftraveled_miles<<endl;
		cout<<"The Color of The Car = "<<color<<endl;
	}
int main()
{
	car obj;
	obj.in();
	obj.out();
	system("Pause");
}
