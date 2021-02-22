#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
main()

{
	int a=DETECT,b,i,j,k,m=0,z;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");

	for(i=150;i<=250;i++)
	{
		circle(200,200,50);
		j=2500-((200-i)*(200-i));
		j=sqrt(j);
		j=200+j;
		line(200,200,j,i);
		delay(30);
		clrscr();
		circle(200,200,70);
	}
	for(i=250;i>=150;i--)
	{
		circle(200,200,50);
		j=2500-((200-i)*(200-i));
		j=sqrt(j);
		j=200-j;
		line(200,200,j,i);
		delay(30);
		clrscr();
		circle(200,200,70);
	}
	getch();
	closegraph();
}
