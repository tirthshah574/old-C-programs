#include<stdio.h>
#include<graphics.h>
#include<dos.h>
main()

{
	int a=DETECT,b,i;
	clrscr();
	initgraph(&a,&b,"c:\\tc\\bgi");
	for(i=0;i<100;i++)
	{
	circle(100,i+100,50);
	delay(10);
	clrscr();
	}
	getch();
	closegraph();
}