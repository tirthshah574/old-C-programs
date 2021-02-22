#include<stdio.h>
#include<dos.h>
#include<graphics.h>
main()

{
	int a=DETECT,b,i,j,k,m=0;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");

	k:
	j=getch();
	if(j=='a');
	{
	for(i=0;i<=200;i++)
	{
	clrscr();
	setcolor(1);
	rectangle(0,i+0,70,i+100);
	rectangle(35,i+50,105,i+150);
	line(0,i+0,35,i+50);
	line(70,i+100,105,i+150);
	line(70,i+0,105,i+50);
	line(0,i+100,35,i+150);
	delay(10);
	}
	}

	getch();
	closegraph();
}