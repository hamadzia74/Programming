#include<iostream>
using namespace std;
class over{
	public:
		int a;
		float b;
		void fun()
		{
			a=100;
			b=200.9;
			cout<<a<<endl;
			cout<<b<<endl;
		}
		void fun(int x, float y)
		{
			a=x;
			b=y;
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
int main()
{
	over obj;
	obj.fun();
	obj.fun(100,300.1f);
	return 0;
}
