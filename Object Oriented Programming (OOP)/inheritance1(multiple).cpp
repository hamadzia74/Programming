#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		public:
			 person()
			{
			name="Hamad";
			age=19;	
			}
		};
		class subject
		{
			public:
				int m1,m2;
				public:
					subject()
					{
						m1=45;
						m2=49;
					}
	};
	class student:public person,public subject
	{
			public:
			void output()
	    {
		    cout<<"The Name of Person is "<<name<<endl;
	        cout<<"The Age of Person is "<<age<<endl;
			cout<<"Marks of 1st subject is "<<m1<<endl;
		    cout<<"Marks of 2nd Subject is "<<m2<<endl;
		}
};
int main()
{
	student obj;
	obj.output();
	system("pause");
}
