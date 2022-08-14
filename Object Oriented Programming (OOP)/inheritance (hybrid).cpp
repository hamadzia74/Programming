#include<iostream>
using namespace std;
class arithmetic
{
	
	public:
		int x,y;
		void input()
		{
			cout<<"Enter the 1st value:"<<endl;
			cin>>x;
			cout<<"Enter the 2nd value:"<<endl;
			cin>>y;
		}
	};
	class pluse:public arithmetic
	{
		public:
			void sum()
			{
				cout<<"The Sum of Two Numbers = "<<x+y<<endl;
	        }
    };
    int main()
    {
    	
    pluse obj;
	obj.input();
	obj.sum();
	system("pause");	
	}
