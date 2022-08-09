#include<iostream>
using namespace std;
float convertHeight(int heigth);
int main()
{
	float n;
	cout<<"Enter the height of a person:"<<endl;
	cin>>n;
	convertHeight(n);
    return 0;
}
float convertHeight(int height)
{
	float inches,feet;
	inches=height/2.5;
	cout<<"The height in centimeter into inches:"<<inches<<endl;
    feet=inches/12.0;
	cout<<"The height in centimeter into feet:"<<feet<<endl;
}
