#include<iostream>
using namespace std; 
int main()
{
	int a, b, c;
	char op;
	cout<<"Enter value of a"<<endl;
	cin>>a;
	cout<<"Enter value of b"<<endl;
	cin>>b;
	cout<<"Enter an operator"<<endl; 
	cin>>op;
	switch(op)
	{
		case '+':
			c=a+b;
			cout<<"c="<<c<<endl;
		break;
		case '-':
			c=a-b;
			cout<<"c="<<c<<endl;
		break;
		case '*':
			c=a*b;
			cout<<"c="<<c<<endl;
		break;
		case '/':
			c=a/b;
			cout<<"c="<<c<<endl; 
		break;
		case '%':
			c=a%b;
			cout<<"c="<<c<<endl;
		break;
		default:
			cout<<"Invalid operator!"<<endl;
	}
	system("pause");
     }
      

