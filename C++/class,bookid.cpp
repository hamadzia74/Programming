#include<iostream>
using namespace std;
class book
{
	private:
		int bookid,pages;
		float price;
	public:
		void get()
			{
				cout<<"Enter Book Id:"<<endl;
				cin>>bookid;
				cout<<"Enter pages:"<<endl;
				cin>>pages;
				cout<<"Enter price:"<<endl;
				cin>>price;
			}
		void show()
			{
				cout<<"Book ID = "<<bookid<<endl;
				cout<<"Pages = "<<pages<<endl;
				cout<<"Price = "<<price<<endl;
			}
			void set(int id,int pg,float pr)
			{
			bookid=id;
			pages=pg;
			price=pr;	
			}
			float getprice()
			{
				return price;
			}
};
int main()
{
	book b1,b2;
	b1.get();
	b2.set(2,320,150.32);
	cout<<"\nThe detail of most costly book is as follows:"<<endl;
	if(b1.getprice()>b2.getprice())
	b1.show();
	else
	b2.show();
	system("pause");
}
