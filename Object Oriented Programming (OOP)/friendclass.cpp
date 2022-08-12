#include<iostream>
using namespace std;
class friend1{
	private:
		int a = 0  , b = 0;
	public:
		friend class friend2;
};
class friend2{
		public:
			int s1;
		 friend1 f1;
			void friend6(){
			cout<<"Enter value of a"<<endl;
			cin>>f1.a;
			cout<<"Enter value of b"<<endl;
			cin>>f1.b;
			s1=f1.a+f1.b;
			cout<<"The Sum is "<<s1<<endl;
		}		    
};
int main(){
	friend2 f;
	f.friend6();
	return 0;
}

