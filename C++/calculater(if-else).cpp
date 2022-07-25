#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	char op;
	cout<<"Enter the vlaue of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	cout<<"Enter the operator"<<endl;
	cin>>op;
	if ('+')
	{
	 c=a+b;
	cout<<"c="<<c<<endl;
    }
	else if('-')
	 {
	 c=a-b;
	 cout<<"c="<<c<<endl;
    }
	 else if('*')
	  {
	  c=a*b;
	  cout<<"c="<<c<<endl;
      }
	else if('/')
	 {
	 c=a/b;
	 cout<<"c="<<c<<endl;
     }
	 else if('%')
	 
	 {
	  c=a%b;
	  cout<<"c="<<c<<endl;
     }
	 else
	 cout<<"invalid operator!"<<endl;  
	system("pause");
}
