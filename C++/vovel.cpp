#include<iostream>
using namespace std;
int main()
{
	char v;
	cout<<"Enter the vovel"<<endl;
	cin>>v;
	switch(v)
	{
	case 'A':
	case'a':
		cout<<"the character is vovel"<<endl;
	break;
	case'E':
	case'e':
		cout<<"the character is vovel"<<endl;
	break;
	case'I':
	case'i':
		cout<<"the character is vovel"<<endl;
		break;
	case'O':
	case'o':
		cout<<"the character is vovel"<<endl;
	break;
	case'U':
	case'u':
		cout<<"the character is vovel"<<endl;
	break;
		default:
			cout<<"Invalid character!"<<endl;
		}
		system("pause");
}
