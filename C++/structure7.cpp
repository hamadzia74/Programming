#include<iostream>
using namespace std;
struct Player
{
  int dis, min, sec; 	
};
int main()
{
Player p1, p2;
float time1, time2;
cout<<"Enter distance covered by first player:"<<endl;
cin>>p1.dis;
cout<<"Enter minutes & seconds:"<<endl;
cin>>p1.min>>p1.sec;
cout<<"Enter distance covered by second player:"<<endl;
cin>>p2.dis;
cout<<"Enter minutes & seconds:"<<endl;
cin>>p2.min>>p2.sec;
time1=(p1.min*60+p1.sec)/p1.dis;
time2=(p2.min*60+p2.sec)/p2.dis;
cout<<"The record of winner player:"<<endl;
if(time1<=time2)
{
	cout<<"Player 1 distance:"<<p1.dis<<"miles in ";
	cout<<p1.min<<"minutes,"<<p1.sec<<"seconds."<<endl;
}
else
{
    cout<<"Player 2 distance:"<<p2.dis<<"miles in 10";
	cout<<p2.min<<"minutes,"<<p2.sec<<"seconds."<<endl;
}	
system("pause");
}

