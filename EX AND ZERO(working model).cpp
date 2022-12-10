#include <iostream>
#include <graphics.h>
using namespace std;
bool gamestop = false;
int pos[3][3];
int flag = 0;
int xc = 275;
int yc = 225;


class game 
{
	/*int flag = 0;
    int xc = 275;
    int yc = 225;
    int xmin = 225;
    int xmax = 325;
    int ymax = 175;
    int ymin = 275;  */  
	public:
		void layout();
		void zero(int,int);
		void ex(int,int);
		void logic();
		void winner();
		void check();
		void menu();
		
};

void game::layout()
{
	setcolor(14);
	line(200,200,350,200); //upper horizontal line
	line(200,250,350,250); //lower horizontal line
	line(250,150,250,300); //left vertical line
	line(300,150,300,300); //right vertical line
}

void game::zero(int x,int y)
{
	setcolor(15);
	gamestop = false;
	circle(x,y,13);
}

void game::ex(int x,int y)
{
	setcolor(15);
	gamestop = false;
	line(x - 9,y - 9,x + 9,y + 9);
	line(x - 9,y + 9,x + 9,y - 9);
}

void game::logic()
{
	int temp = 10;
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			pos[i][j] = temp;
			temp = temp + 10;
		}
	}
	cout<<endl<<"-----------------------------------------------------TIC TAC TOE--------------------------------------------------------"<<endl;
	cout<<"                                           PLAYER 1 = 'O'     PLAYER 2 = 'X'"<<endl;
	cout<<"  a | b | c"<<endl;
	cout<<"  ---------"<<endl;
	cout<<"  d | e | f"<<endl;
	cout<<"  ---------"<<endl;
	cout<<"  g | h | i"<<endl;
	
	while(gamestop == false)
	{
	char opt;
	cout<<" "<<endl<<" "<<endl;
	if(flag == 0)
	{
		cout<<"PLAYER 1 PLACE YOUR 'O' BY CHOOSING THE POSITION FROM ABOVE ^ "<<endl; 
	}
	else
	{
		cout<<"PLAYER 2 PLACE YOUR 'X' BY CHOOSING THE POSITION FROM ABOVE ^ "<<endl; 
	}
	cout<<"ans : ";
	cin>>opt;
	
	switch(opt)
	{
		case 'a': 
		  if(pos[0][0] != 0 && pos[0][0] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc - 50,yc - 50);
		  	pos[0][0] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc - 50,yc - 50);
		  	pos[0][0] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		  
		case 'b': 
		  if(pos[0][1] != 0 && pos[0][1] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc,yc - 50);
		  	pos[0][1] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc,yc - 50);
		  	pos[0][1] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
	      
		case 'c': 
		  if(pos[0][2] != 0 && pos[0][2] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc + 50,yc - 50);
		  	pos[0][2] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc + 50,yc - 50);
		  	pos[0][2] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'd': 
		  if(pos[1][0] != 0 && pos[1][0] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc - 50,yc);
		  	pos[1][0] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc - 50,yc);
		  	pos[1][0] = 1;
		  	flag = 0;
		  	break;
		  }
		  }
		  else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'e': 
		  if(pos[1][1] != 0 && pos[1][1] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc,yc);
		  	pos[1][1] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc,yc);
		  	pos[1][1] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'f': 
		  if(pos[1][2] != 0 && pos[1][2] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc + 50,yc);
		  	pos[1][2] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc + 50,yc);
		  	pos[1][2] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'g': 
		  if(pos[2][0] != 0 && pos[2][0] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc - 50,yc + 50);
		  	pos[2][0] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc - 50,yc + 50);
		  	pos[2][0] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'h': 
		  if(pos[2][1] != 0 && pos[2][1] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc,yc + 50);
		  	pos[2][1] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc,yc + 50);
		  	pos[2][1] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'i': 
		  if(pos[2][2] != 0 && pos[2][2] != 1)
		  {
		  
		  if(flag == 0)
		  {
		  	zero(xc + 50,yc + 50);
		  	pos[2][2] = 0;
		  	flag = 1;
		  	break;
		  }
		  else
		  {
		  	ex(xc + 50,yc + 50);
		  	pos[2][2] = 1;
		  	flag = 0;
		  	break;
		  }
	      }
	      else
	      {
	      	cout<<"Position already used !!";
	      	break;
		  }
		case 'x':
			gamestop = true;
			break;
		default : cout<<"invalid option!!";
		    break;
	}
	check();
	winner();
  }
}

void game::winner()
{
	

		if(pos[0][0] == pos[0][1] && pos[0][1] == pos[0][2])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(225,175,325,175);
			gamestop = true;
		}
		if(pos[1][0] == pos[1][1] && pos[1][1] == pos[1][2])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(225,225,325,225);
			gamestop = true;
		}
		if(pos[2][0] == pos[2][1] && pos[2][1] == pos[2][2])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(225,275,325,275);
			gamestop = true;
		}
		if(pos[0][0] == pos[1][0] && pos[1][0] == pos[2][0])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(225,175,225,275);
			gamestop = true;
		}
		if(pos[0][1] == pos[1][1] && pos[1][1] == pos[2][1])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(275,175,275,275);
			gamestop = true;
		}
		if(pos[0][2] == pos[1][2] && pos[1][2] == pos[2][2])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(325,175,325,275);
			gamestop = true;
		}
		if(pos[0][0] == pos[1][1] && pos[1][1] == pos[2][2])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(225,175,325,275);
			gamestop = true;
		}
		if(pos[0][2] == pos[1][1] && pos[1][1] == pos[2][0])
		{
			if(flag == 1)
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 1 !!!";
			}
			else
			{
				cout<<" "<<endl<<" "<<endl<<"THE WINNER IS PLAYER 2 !!!";
			}
			setcolor(13);
			line(325,175,225,275);
			gamestop = true;
		}
}

void game::check()
{
	int ch = 1;
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			if(pos[i][j] == 0 || pos[i][j] == 1)
			{
				ch = ch + 1;
				
			}
			else
			{
				ch = 0;
			}
		}
	}
	
	if(ch == 10)
	{
		cout<<" "<<endl<<" "<<endl<<" IT IS A DRAW!!";
		gamestop = true;
	}
	else
	{
		gamestop = false;
	}
}

void game::menu()
{
	char yn;
	if(gamestop == true)
	{
		cout<<" "<<endl<<" "<<endl<<"DO YOU WANT TO PLAY AGAIN ?? "<<endl<<"YES (y)   NO (n)"<<endl<<"ans: ";
		cin>>yn;
		switch(yn)
		{
			case 'y':
				gamestop = false;
				flag = 0;
				cleardevice();
				layout();
				logic();
				menu();
				break;
			case 'n':
				gamestop = true;
				break;
			default:
				cout<<"please choose correct option"<<endl;
				break;
		}
	}
}

int main()
{
	game g;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,NULL);
	g.layout();
	g.logic();
	g.menu();
	getch();
	closegraph();
}




