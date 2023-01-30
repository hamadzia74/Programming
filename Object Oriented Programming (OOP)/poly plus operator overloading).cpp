// Polymorphism: + Operator Overloading
#include<iostream>
using namespace std;
class marks
{
	public:
		int midmarks, finalmarks;
		public:
			marks()
			{
			midmarks=0;
			finalmarks=0;	
			}
			marks(int i, int m)
			{
			 midmarks=i;
		     finalmarks=m;	
			}
			void display()
			{
				cout<<"Mid Term Marks = "<<midmarks<<endl;
				cout<<"Final Term Marks = "<<finalmarks<<endl;
			}
			marks operator +(marks m1)
			{
				marks m2;
				m2.midmarks = midmarks + m1.midmarks;
				m2.finalmarks = finalmarks + m1.finalmarks;
			    return m2;
			}
};
int main()
{
	system("cls");
	// Minimum 2 objects to implement the plus Operator
	marks m3(20,30) , m4(30,40);
	marks m5 = m4 + m5;
	m5.display();
    system("pause");
}
