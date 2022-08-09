//Write a  program in C++ to implement following concepts of Object Oriented Programming.
#include<iostream>
using namespace std;
class oop
{  //simple class 1 starts {
private:
	string name;
	int rowno,rollno,marks;
	static int x;
public:
	void input()
	{
		cout << "Enter The Name of Student:" << endl;
		cin >> name;
		cout << "Enter The Rollno. of The Student:" << endl;
		cin >> rollno;
	}  //simple class 1 }
	
	//Default constructor 1 {
	oop()
	{
		name ="zia";
		rollno = 123;
		x++;
		cout<<x<<" Object is Created!"<<endl;
	}  
	void out()
	{
		cout<<"Name is "<<name<<endl;
		cout<<"Rollno. is "<<rollno<<endl;
	}
	 //Default constructor 1 }
	
	//Parameterized constructor 1 {
	oop(string a,int rn,int l,int m)
	{
		name=a;
		rowno=rn;
		rollno=l;
		marks=m;
	}   //Parameterized constructor 1 }
	
	 //simple class 2 {
	void output()
		{
			cout << "Student Name is: " << name << endl;
			cout << "Student Roll NO.: " << rollno << endl;
		}  //simple class 2 }
		
		//Copy Constructor 1 {
	oop(const oop &s2)
	{
		name=s2.name;
		rowno=s2.rowno;
		rollno = s2.rollno;
		marks = s2.marks;
	}
	//Parameterized constructor 2 {
	void output1()
	{
		cout << "Student Name is: " << name << endl;
		cout << "Student Row NO.: " << rowno << endl;
		cout<<"Rollno = "<< rollno<<endl;
		cout<< "Marks = "<< marks<<endl;	
	}	//Copy constructor 1 } , Parameterized constructor 2 }
	};
    int oop::x=0;
	int main()
	{
		system("cls");
		cout<<"Press 1 for simple class."<<endl;
		cout<<"Press 2 for Default Constructor."<<endl;
		cout<<"Press 3 for Paramiterized  Constructor."<<endl;
		cout<<"Press 4 for Copy Constructor."<<endl;
		cout<<"Press 5 for Static."<<endl<<endl;
		int n;
		cout<< "Enter your Choice."<< endl;
		cin >> n;
		if (n == 1)
		{
			oop obj;
			obj.input();
			obj.output();
		}
		if (n == 2)
		{
         oop obj1,obj2,obj3;
         obj1.out();
		}
 		if(n==3)
 		{
 			oop obj2("umar",23,10,850);
 			obj2.output1();
		 }
		 if(n==4)
		 {
		 	oop s1("huzaifa",10,12,13);
	        oop s2=s1;
	        s2.output1();
		 }
		 if(n==5)
		 {
		   oop t1,t2,t3;
		 }
		return 0;
	}
