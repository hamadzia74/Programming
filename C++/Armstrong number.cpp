#include<iostream>
using namespace std;
int main()
{
	int num, pstvenum, rem, digit, sum=0;
	cout<<"Enter a positive number"<<endl;
	cin>>pstvenum;
	num=pstvenum;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit*digit*digit;
		num/=10;
	}
	if(sum==pstvenum)
	cout<<pstvenum<<" is an Armstrong number"<<endl;
	else cout<<pstvenum<<" is not an Armstrong number"<<endl;
	system("pause");
}
