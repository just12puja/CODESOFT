//tic-tac-toe
#include<iostream>
using namespace std;
void tictactoe();
void gameboard(char *spaces);
void playerXmove(char *spaces, char playerX);
void playerOmove(char *spaces, char playerO);
bool checkwinner(char *spaces,char playerX, char playerO);
bool checktie(char *spaces); 
int main()
{
	tictactoe();
	return 0;
}
 void tictactoe()
{
char spaces[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char playerX='X';
char playerO='O';
bool running=true;
cout<<"------------------------WELCOME TO TIC TAC TOE---------------------------";
gameboard(spaces);	
while(running)
{
	playerXmove(spaces,playerX);
	gameboard(spaces);
	if(checkwinner(spaces,playerX,playerO))
	{
		running=false;
		break;
	}
	else if(checktie(spaces))
	{
		running=false;
		break;
	}
	playerOmove(spaces,playerO);
	gameboard(spaces);
	if(checkwinner(spaces,playerX,playerO))
	{
		running=false;
		break;
	}
	else if(checktie(spaces))
	{
		running=false;
		break;
	}
}
int choice;
cout<<"\n----------THANK'S FOR PLAYING-------"<<endl;
do{

cout<<"DO YOU WANT TO PLAY AGAIN??"<<endl;
cout<<"Enter Your Choice:\n 1.YES \n 2.NO"<<endl;
cin>>choice;


if (choice==1)
{
	tictactoe();
	choice=0;
	break;
}
else if(choice==2)
{
	cout<<"\n----------PLEASE VISIT AGAIN-----------"<<endl;
	choice=0;
	break;
}
else{
	cout<<"Invalid choice"<<endl;
	cout<<"Enter again"<<endl;
	choice=0;


	
}
}
while(choice==0);



}
//------------------print boardgame-----------------//
void gameboard(char *spaces){
	cout<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<endl;
	cout<<"     |     |     "<<endl;
	cout<<endl;
}
//-------------------playerX---------------------
void playerXmove(char *spaces, char playerX)
{
	int number;
	do
	{
	cout<<"PLAYER X:Enter a spot using the number(1-9):"	;
	cin>>number;
	number--;
	if(spaces[number]==' ')	{
		spaces[number]=playerX;
		cout<<"GAME: Ongoing"<<endl;
		break;
	}
	
	}
	while(!number > 0 || !number <8);
}
//-------------------playerO----------------------//

void playerOmove(char *spaces, char playerO){
	int number;
	do
	{
	cout<<"PLAYER O:Enter a spot using the number(1-9):"	;
	cin>>number;
	number--;
	if(spaces[number]==' ')	{
		spaces[number]=playerO;
		cout<<"GAME: Ongoing"<<endl;
		break;
	}
	}
	while(!number > 0 || !number <8);
}
//---------------------winner-----------------//
bool checkwinner(char *spaces,char playerX, char playerO){
	//----------------check for rows-----------//
	if( (spaces[0]!=' ')&&(spaces[0]==spaces[1]) && (spaces[1]==spaces[2]))
	{
	spaces[0]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
	 else if( (spaces[3]!=' ')&&(spaces[3]==spaces[4]) && (spaces[4]==spaces[5]))
	 {
	spaces[3]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
	else if( (spaces[6]!=' ')&&(spaces[6]==spaces[7]) && (spaces[7]==spaces[8]))
	{
	spaces[6]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
// ---------------check for column-------------//
else if( (spaces[0]!=' ')&&(spaces[0]==spaces[3]) && (spaces[3]==spaces[6]))
{
	spaces[0]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
else if( (spaces[1]!=' ')&&(spaces[1]==spaces[4]) && (spaces[4]==spaces[7]))
{
	spaces[1]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
else if( (spaces[2]!=' ')&&(spaces[2]==spaces[5]) && (spaces[5]==spaces[8]))
{
	spaces[2]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
//diagonal
else if( (spaces[0]!=' ')&&(spaces[0]==spaces[4]) && (spaces[4]==spaces[8]))
{
	spaces[0]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
else if( (spaces[2]!=' ')&&(spaces[2]==spaces[4]) && (spaces[4]==spaces[6]))
{
	spaces[2]==playerX?cout<<"PLAYER X: WIN":cout<<"PLAYER O: WIN"<<endl;
}
else
{
	return false;
}
return true;
}
//-------------------draw------------------//
bool checktie(char *spaces){
	for(int i=0;i<9;i++)
	{
		if(spaces[i]==' ')
		{
			return false;
		}
		
	}
	cout<<"IT'S A DRAW!"<<endl;
		return true;
}
