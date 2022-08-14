#include<iostream>
using namespace std;
class shape
{
	public:
		int height, width,volume;
		public:
			void getArea(int h, int w)
			{
			height=h;
			width=w;
			cout<<height*width<<endl;
			}
			void getArea(int h, int w, int c)
			{
			height=h;
			width=w;
			volume=c;
			cout<<height*width*volume<<endl;
		}
};
int main()
{
	shape s;
	s.getArea(1,20);
	s.getArea(1,1,2);
	return 0;
}
