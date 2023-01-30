// + Operator Overload
#include<iostream>
using namespace std;
class marks{
	int intmark;
	int extmark;
  public:
  	marks(){
  		intmark = 0;
  		extmark = 0;
	  }
	  marks(int im , int exm){
	  	intmark = im;
	  	extmark = exm;
	  }
	  void display(){
	  	cout<<intmark<<endl<<extmark<<endl;
	  }
	  marks operator+(marks m){
	  	marks temp;
	  	temp.intmark = intmark + m.intmark;
	  	temp.extmark = extmark + m.extmark;
	  	return temp;
	  }
};
int main(){
	 marks m1(10,20),m2(30,40);
	 marks m3 = m1 + m2;
	 m3.display();
	return 0;
}

