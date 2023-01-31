#include<iostream>
using namespace std;
class Test
{
	private:
		 static int x;
		public:
			Test()
			{
				x++;
				cout<<x<<" Object is Created!"<<endl;
			}	
};
int Test::x=0;
int main()
{
	Test t1;
	Test t2,t4;
	return 0;
}
