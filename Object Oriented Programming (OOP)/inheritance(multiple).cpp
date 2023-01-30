#include<iostream>
using namespace std;
class studentinfo
{
	public:
		string name;
		int phno,cnic;
		void input()
		{
		cout<<"Enter Name of Student"<<endl;
		cin>>name;
		cout<<"Enter CNIC Number of Student"<<endl;
		cin>>cnic;
		cout<<"Enter Phone Number of Student"<<endl;
		cin>>phno;
	    }
		void output()
		{
			cout<<"Name of Student is "<<name<<endl;
		    cout<<"CNIC Number of Student is "<<cnic<<endl;
		    cout<<"Phone Number of Student is "<<phno<<endl;
		}
};
class Marksinfo
{
	public:
	int	eng,mth;
		void input()
		{
		cout<<"Enter the marks of Math."<<endl;
        cin>>mth;
        cout<<"Enter the marks of English"<<endl;
        cin>>eng;	
		}
       void output()
       { 
        	cout<<"Marks of Math is "<<mth<<endl;
            cout<<"Marks of English is "<<eng<<endl;	
       }
};
class Subjectinfo:public studentinfo,public Marksinfo
{
	public:
		void info()
		{
		 studentinfo::input();
		 studentinfo::output();
		 Marksinfo::input();
		 Marksinfo::output();
		}
};
class Departmentinfo:public studentinfo
{
public:
    void info()
	{
		studentinfo::output();
	}
};
int main()
{
	Subjectinfo obj;
	Departmentinfo obj1;
	obj.info();
	obj1.info();
	system("pause");
}
