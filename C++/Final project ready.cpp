#include <iostream>
#include<conio.h>
using namespace std;
char box[10] = {'o','1','2','3','4','5','6','7','8','9'};
class Tic
{		
	public:
    //TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
	void board()
{
    system("cls");
    cout<<endl;
    cout<<"\t\t*********************************"<<endl;
	cout<<"\t\tWelcome To The Tic Tac Toe Lite!"<<endl;
	cout<<"\t\t*********************************"<<endl<<endl;
	cout<<"SYMBOLS:>>"<<endl;
	cout<<"For Player 1 Symbol is (O)  -  For Player 2 Symbol is (X)" << endl;
	cout<<endl;
	cout<<"\t\t@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t\t@     |     |     @"<<endl;
	cout<<"\t\t@  "<<box[1]<<"  |  "<<box[2]<<"  |  "<<box[3]<<"  @"<<endl;
	cout<<"\t\t@ ____|_____|____ @" <<endl;
	cout<<"\t\t@     |     |     @" <<endl;
	cout<<"\t\t@  "<<box[4]<<"  |  "<<box[5]<<"  |  "<<box[6]<<"  @"<<endl;
	cout<<"\t\t@ ____|_____|____ @" <<endl;
	cout<<"\t\t@     |     |     @ " <<endl;
	cout<<"\t\t@  "<<box[7]<<"  |  "<<box[8]<<"  |  "<<box[9]<<"  @"<<endl;
	cout<<"\t\t@     |     |     @"<<endl;
	cout<<"\t\t@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
}
int checkwin()
{
	if (box[1] == box[2] && box[2] == box[3])
		return 1;
	else if (box[4] == box[5] && box[5] == box[6])
		return 1;
	else if (box[7] == box[8] && box[8] == box[9])
		return 1;
	else if (box[1] == box[4] && box[4] == box[7])
		return 1;
	else if (box[2] == box[5] && box[5] == box[8])
		return 1;
	else if (box[3] == box[6] && box[6] == box[9])
		return 1;
	else if (box[1] == box[5] && box[5] == box[9])
		return 1;
	else if (box[3] == box[5] && box[5] == box[7])
		return 1;
	else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' 
                  && box[7] != '7' && box[8] != '8' && box[9] != '9')
		return 0;
	else
		return -1;
}
};
  int main()
{     
    Tic obj;
    int ignore();
    int get();
	int player = 1,*i,choice;
	char mark;
	do
	{
		obj.board();
		player=(player%2)?1:2;
		cout<<"Player "<<player<<" turns:>>"<<endl;
		cout<<"Enter a Number To Play The Game : ";
		cin>>choice;
		mark=(player == 1) ? 'O' : 'X';
		if (choice == 1 && box[1] == '1')
			box[1] = mark;
		else if (choice == 2 && box[2] == '2')
			box[2] = mark;
		else if (choice == 3 && box[3] == '3')
			box[3] = mark;
		else if (choice == 4 && box[4] == '4')
			box[4] = mark;
		else if (choice == 5 && box[5] == '5')
			box[5] = mark;
		else if (choice == 6 && box[6] == '6')
			box[6] = mark;
		else if (choice == 7 && box[7] == '7')
			box[7] = mark;
		else if (choice == 8 && box[8] == '8')
			box[8] = mark;
		else if (choice == 9 && box[9] == '9')
			box[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			cin.ignore();
			cin.get();
		}
		*i=obj.checkwin();
		player++;
	}
	while(*i==-1);
	obj.board();
	if(*i==1)
		cout<<" ==>> \aPlayer "<<--player<<" wins!!! \n\t\t\"Congratulations.\n ==>> The Game is Ended!!!"<<endl;
	else
		cout<<" ==>> \aThe Game is draw.\n ==>> The Game is Ended!!!";
	cin.ignore();
	cin.get();
    cout<<endl;
	system("pause");
}
	//END OF PROJECT
