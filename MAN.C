#include<stdio.h>
#include<graphics.h>
#include<dos.h>
main()

{
	int a=DETECT,b,i,j;
	clrscr();
	initgraph(&a,&b,"c:\\tc\\bgi");
	for(j=0;j<50;j=j+5)
	{
	for(i=0;i<50;i++)
	{
	circle(150+j,150,20);
	line(150+j,170,150+j,200);
	line(150+j,185,130+i+j,220);
	line(150+j,185,170-i+j,220);
	if(j%2==0)
	{
	line(150+j,200,130+i+j,235);
	line(150+j,200,170-i+j,235);
	}
	else
	{
	line(150+j,200,170-i+j,235);
	line(150+j,200,130+j+i,235);
	}
	line(10,300+j,10,300+j);
	delay(10);
	clrscr();
	}
	}
	getch();
	closegraph();

}