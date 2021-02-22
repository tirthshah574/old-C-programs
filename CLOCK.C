#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
main()

{
	int a=DETECT,b,i,k,m=0,z,f,e;
	int j;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");

	for(i=150;i<=250;i++)
	{
		//circle(200,200,50);
		j=2500-((200-i)*(200-i));
		j=sqrt(j);
		j=200+j;
		//line(200,200,j,i);
		delay(10);
		//clrscr();
		if(e==i)
		{
		putpixel(i,j,CYAN);
		putpixel(j,i,CYAN);
		}
		else if(f==j)
		{
		putpixel(i,j,CYAN);
		putpixel(j,i,CYAN);
		}
		e=i;
		f=j;
		//circle(200,200,70);
	}
	for(i=250;i>=150;i--)
	{
		//circle(200,200,50);
		j=2500-((200-i)*(200-i));
		j=sqrt(j);
		j=200-j;
		//line(200,200,j,i);
		delay(10);
		if(f==j)
		putpixel(i,j,CYAN);
		else
		putpixel(j,i,CYAN);
		//clrscr();
		//circle(200,200,70);
		f=j;
	}
	getch();
	closegraph();
}
