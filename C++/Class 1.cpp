#include<iostream>
using namespace std;
class Test
{
	private:
	int n;
	public:
    void in()
    {
    	cout<<"Enter a number:"<<endl;
    	cin>>n;
	}
	void out()
	{
		cout<<"The value of n = "<<n<<endl;
	}
    };
	int main()
	{
		Test obj;
		obj.in();
		obj.out();
		system("pause");
	}
