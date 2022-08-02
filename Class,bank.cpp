#include<iostream>
using namespace std;
class bank_account
{
private:
	string depositor_name,account_type,y;
	double account_no, balance_amount, withdraw_money;
	int a;
public:
	void account()
	{
		cout<<"Enter the Name of Depositor."<<endl;
	    cin>>depositor_name;
	    cout<<"What type of account you want to open Saving (s) or Current (c):"<<endl;
     	cin>>y;
	    cout<<"Enter Your Account No."<<endl;
	    cin>>account_no;
	}
	void deposit()
	{
		cout << "Enter a sum you wish to deposite " << endl;
		cin >> a;
		balance_amount += a;
	}
	void withdraw()
	{
		cout << "Enter a sum you wish to withdraw " << endl;
		cin >> withdraw_money;
		balance_amount -= withdraw_money;
		if(withdraw_money>balance_amount)
		{
		cout<<"you account balance is less than the amount you require."<<endl;
		exit(0);
	    }
	}
		void display()
		{
			cout<<"The Name of Depositor :: "<<depositor_name<<endl;
			cout<<"Your AccountType :: "<<y<<endl;
			cout<<"The Account No. of Depositor :: "<<account_no<<endl;
			cout << "Total amount you deposite :: " << a << endl;
			cout << "You have withdrawn " << withdraw_money << " from your account." << endl;
			cout<<"Your Current Amount After Withdrawn :: "<<balance_amount<<endl;
		}
};
int main()
{
	bank_account obj;
     int i;
	cout<<"Bank Manaement System."<<endl;
	cout<<"**********************"<<endl;
	for(i=0;i<5;i++)
	{
	cout<<"Enter the Record of "<<i+1<<" Customer."<<endl;
	obj.account();
	obj.deposit();
	obj.withdraw();
	cout<<endl;
	obj.display();
	cout<<endl;
    }
	system("pause");
}
