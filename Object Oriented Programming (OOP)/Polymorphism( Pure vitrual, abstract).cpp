/*  virtual functions with person class
 Create a C++ Program to implement the pure virtual funtion and abstract classes 
 Create a Class name person and make a funtion geinfo() and putinfo()  
 and make attributes as a protected and after that make two funtions of   
 getdata() and isoutstanding() as pure virtual funtion and make another two   
 classes student and professor and if user press  s the Funtion of Student class is run	
 and cgpa of student is asked and if cgpa is less than 2.5 program shows this is not outstanding student otherwise outstanding student 
 and if user press p then professor class funtion is run and program asked from users to enter the 	
 number of publications if nopub is greater than 20 then program asked professor is not	outstanding.*/

#include<iostream>
using namespace std;
class person{
	protected:
			string name;
			long cnic;
			public:
				void getinfo()
				{
					cout<<"Enter the name of Person:"<<endl;
					cin>>name;
					cout<<"Enter the CNIC Number of Person:"<<endl;
					cin>>cnic;
				}
				void putinfo()
				{
					cout<<"The Name is "<<name<<endl;
					cout<<"The CNIC Number is "<<cnic<<endl;
				}
				virtual void getdata()=0;
				virtual void isoutstanding()=0;
};
class student:public person
{
	protected:
		float cgpa;
		public:
			void getdata()
			{
				cout<<"Enter the CGPA of Student:"<<endl;
				cin>>cgpa;
			}
			void isoutstanding()
			{
			if(cgpa<2.5)
			{
				cout<<"This is not an Outstanding Student."<<endl;
			}
			else 
			{
				cout<<"Outstanding Student."<<endl;
			}
		}
};
class professor:public person
{
	protected:
		int nopub;
		public:
			void getdata()
			{
				cout<<"Enter the Number of Publications:"<<endl;
				cin>>nopub;
			}
			void isoutstanding()
			{
				if(nopub<20)
				{
				cout<<"Professor is not outstanding."<<endl;	
				}
				else
				{
					cout<<"Professor is Outstanding."<<endl;
				}
			}
};
int main()
{
	student stu;
	professor pro;
	stu.getinfo();
	stu.putinfo();
	char choice;
	cout<<"Press s for Student & p for Professor."<<endl;
	cin>>choice;
	if(choice == 's' || choice=='S')
	{
		stu.getdata();
		stu.isoutstanding();
	}
	else if(choice=='p' || choice=='P')
	{
		pro.getdata();
		pro.isoutstanding();
	}
	system("pause");
}
