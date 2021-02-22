#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int h=30,w=30;
int x,y;
int fruitX,fruitY,gameOver=0,score,flag;
int tailX[100],tailY[100],count=0;
void set()
{
	gameOver=0;
	x=w/2;
	y=h/2;
	loop1:
	fruitX=rand()%30;
	if(fruitX==0)
	{
		goto loop1;
	}
	loop2:
	fruitY=rand()%30;
	if(fruitY==0)
	{
		goto loop2;
	}
	score=0;
}
void draw()
{
	int i,j,k;
	system("cls");
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{
			if(i==0 || i==h-1 || j==0 || j==w-1)
			{
			
				printf("*");
			}
		 	else
			{
			 	if(x==i && j==y)
				
					printf("O");
				
				else if(i==fruitX && j==fruitY)
				
					printf("F");
				
				else
				{
					int ch=0;
					for(k=0;k<count;k++)
					{
						if(i==tailX[k] && j==tailY[k] )
						{
								printf("o");
								ch=1;
						}
					}
				
				if(ch==0)
				
					printf(" ");
				}
			}	
		}
		printf("\n");
		
	}

}

void key()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'w':
			flag=1;
			break;
			case 'a':
			flag=2;
			break;
			case 'd':
			flag=3;
			break;
			case 's':
			flag=4;
			break;
			case 'x':
			gameOver=1;
			break;
		}
	}
}
void core()
{
	int prevX,prevY,prev2X,prev2Y,i;
	prevX=tailX[0];
	prevY=tailY[0];
	tailX[0]=x;
	tailY[0]=y;
	for(i=1;i<count;i++)
	{
			prev2X=tailX[i];
			prev2Y=tailY[i];
			tailX[i]=prevX;
			tailY[i]=prevY;
			prevX=prev2X;
			prevY=prev2Y;
	}
	switch
	(flag)
	{
		case 1:
		x--;
		break;
		case 2:
		y--;
		break;
		case 3:
		y++;
		break;
		case 4:
		x++;
		break;
		default:
		break;
	}
	if(x<1 || x>=h || y<0 || y>=w)
	{
		gameOver=1;
	}
	if(x==fruitX && y==fruitY)
	{
		loop3:
		fruitX=rand()%30;
		if(fruitX==0)
		{
			goto loop3;
		}
		loop4:
		fruitY=rand()%30;
		score+=5;
		count++;		
		if(fruitY==0)
		{
						goto loop4;
		}
	}
}



int main()
{
	int m,n;
	set();
	while(!gameOver)
	{	draw();
		key();
		core();
		for(m=1;m<=10000;m++)
		{
			for(n=1;n<=10000;n++)
			{
			}
		}
	}
	return 0;
}
