#include<iostream>
using namespace std;
int show();
int table(int n);
int factorial(int n);
int max(int a,int b);
int value(int x);
int cal(int a, char c,int b);
int shape(int l,char ch);
int grade(int m);
int swap(int &x,int &y);
int mul(int a, int b)
{
	if(b%a==0)
	return 1;
	else 
	return 0;
}
float area(int b,int h)
{
	float a;
	a=0.5*b*h;
	return a;
}
int sqr(int n);
int cube(int n);
int main()
{
	cout<<"1 for Text Message"<<endl;
	cout<<"2 for Table of Number"<<endl;
	cout<<"3 for Factorial of Number"<<endl;
	cout<<"4 for Maximum Value"<<endl;
	cout<<"5 for Next & Previous Value"<<endl;
	cout<<"6 for Arithmatic Operations"<<endl;
	cout<<"7 for Shape"<<endl;
	cout<<"8 for Grade"<<endl;
	cout<<"9 for swapping the values"<<endl;
	cout<<"10 for pair numbers and display the multiple"<<endl;
	cout<<"11 for Area of triangle"<<endl;
	cout<<"12 for square & cube"<<endl;
	int ch;
	cout<<"Enter the Choice:"<<endl;
	cin>>ch;
	if(ch==1)
	{
		show();
	}
	else if(ch==2)
	{
	int num;
	cout<<"Enter number of table:"<<endl;
	cin>>num;
	table(num);
    }
    else if(ch==3)
    {
     int x;
	cout<<"Enter number of factorial:"<<endl;
	cin>>x;
	factorial(x);
    }
    else if(ch==4)
    {
    int x, y;
	cout<<"Enter two values:"<<endl;
	cin>>x>>y;
	max(x,y);
    }
    else if(ch==5)
    {
    	int i;
    	cout<<"Enter a Integer:"<<endl;
    	cin>>i;
    	value(i);
	}
	else if(ch==6)
	{
		int a, b;
		char c;
		cout<<"Enter 1st value, operater & 2nd value:"<<endl;
		cin>>a>>c>>b;
		cal(a,c,b);
   }
   else if(ch==7)
   {
   	int l;
   	char ch;
   	cout<<"Enter size of Shape:"<<endl;
   	cin>>l;
   	cout<<"Enter Character:"<<endl;
   	cin>>ch;
   	shape(l,ch);
   }
   else if(ch==8)
   {
   		int marks;
	char g;
	cout<<"Enter marks:"<<endl;
	cin>>marks;
	g=grade(marks);
	cout<<"Your Grade is "<<g<<endl;
   }
   else if(ch==9)
   {
   	int a, b;
   	cout<<"Enter an integer:"<<endl;
   	cin>>a;
   	cout<<"Enter an integer:"<<endl;
   	cin>>b;
   	cout<<"Values before swapping:"<<endl;
   	cout<<"a="<<a<<endl;
   	cout<<"b="<<b<<endl;
   	cout<<"Swapping the values..."<<endl;
   	swap(a,b);
   	cout<<"Values after Swapping:"<<endl;
   	cout<<"a="<<a<<endl;
   	cout<<"b="<<b<<endl;
   }
   else if(ch==10)
   {
   	int i, x, y, r;
   	for(i=1;i<=3;i++)
   	{
   		cout<<"Enter a pair of integers:"<<endl;
   		cin>>x>>y;
   		r=mul(x,y);
   		if(r==1)
   		cout<<y<<" is multiple of "<<x<<endl;
   		else
   		cout<<y<<" is not multiple of "<<x<<endl;
	   }
}
	   else if(ch==11)
	   {
	   	int base, height;
	   	float ar;
	   	cout<<"Enter base:"<<endl;
	   	cin>>base;
	   	cout<<"Enter height:"<<endl;
	   	cin>>height;
	   	ar=area(base,height);
	   	cout<<"Area of triangle is "<<ar<<endl;
	   }
	   else if(ch==12)
	   {
	   	int a, b, r;
	   	cout<<"Enter an integer:"<<endl;
	   	cin>>a;
	   	cout<<"Enter an integer:"<<endl;
	   	cin>>b;
	   	r=sqr(a)+cube(b);
	   	cout<<"Result = "<<r<<endl;
	   }
   return 0;
}
    int show()
    {
    	cout<<"Hello World!"<<endl;
	}
int table(int n)
{
	int c=1;
	while(c<=10)
	{
		cout<<c<<"*"<<n<<"="<<c*n<<endl;
		c=c+1;
	}
}
int factorial(int n)
{
	int c=1;
	int f=1;
	while(c<=n)
	{
		f=f*c;
		c=c+1;
	}
		cout<<"Factorial of "<<n<<" is "<<f<<endl;
}
int max(int a, int b)
{
	if(a>b)
	cout<<"Maximum Number is:"<<a<<endl;
	else
	cout<<"Maximum Number is:"<<b<<endl;
}
int value(int x)
{
	int p,n;
	p=x-1;
	n=x+1;
	cout<<"Next Number is:"<<n<<endl;
	cout<<"Previous Number is:"<<p<<endl;
}
int cal(int a, char c, int b)
{
	if(c=='+')
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	else if(c=='-')
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
	else if(c=='*')
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	else if(c=='/')
	{
		if(b==0)
		cout<<"Divisor cannot be Zero!"<<endl;
		else 
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
	}
	else if(c=='%')
	cout<<a<<"%"<<b<<"="<<a%b<<endl;
}
int shape(int l, char ch)
{
	int i, j;
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=l;j++)
		cout<<ch;
		cout<<endl;
	}
}
int grade(int m)
{
	if(m>=80)
	return 'A';
	else if(m>=70)
	return 'B';
	else if(m>=60)
	return 'C';
	else if(m>=50)
	return 'D';
	else 
	return 'F';
}
int swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int sqr(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
