#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
	
		for(j=5;j>i;j--)
		cout<<" ";
	for(k=0;k<i;k++)
	cout<<" *";
	cout<<endl;
	}
	for(i=5;i>0;i--)
	{
		for(j=5;j>i;j--)
		cout<<" ";
		for(k=0;k<i;k++)
		cout<<" *";
		cout<<endl;
	}
	return 0;
}
OUTPUT IS IN DIAMOND SHAPE
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
	
		for(j=5;j>i;j--)
		cout<<" ";
	for(k=0;k<i;k++)
	cout<<" *";
	cout<<endl;
	}
	for(i=5;i>0;i--)
	{
		for(j=5;j>i;j--)
		cout<<" ";
		for(k=0;k<i;k++)
		cout<<" *";
		cout<<endl;
	}
	return 0;
}

