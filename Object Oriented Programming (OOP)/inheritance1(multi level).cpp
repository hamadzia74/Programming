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
		class subject:public person
		{
			public:
				int m1,m2;
				public:
					subject()
					{
						m1=45;
						m2=49;
					}
					void output()
					{
			       	    cout<<"The Name of Person is "<<name<<endl;
				        cout<<"The Age of Person is "<<age<<endl;
					}
	};
	class student:public subject
	{
			public:
			void output()
	    {
			cout<<"Marks of 1st subject is "<<m1<<endl;
		    cout<<"Marks of 2nd Subject is "<<m2<<endl;
		}
};
int main()
{
	subject obj1;
	obj1.subject::output();
	student obj;
	obj.student::output();
	return 0;
}
