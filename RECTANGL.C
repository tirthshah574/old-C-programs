#include<stdio.h>
#include<dos.h>
#include<graphics.h>
main()

{
	int a=DETECT,b;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");

	rectangle(50,50,100,100);
	rectangle(25,25,75,75);
	line(50,50,25,25);
	line(100,100,75,75);
	line(50,100,25,75);
	line(100,50,75,25);
	getch();
	closegraph();
}