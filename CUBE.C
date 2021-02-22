#include<stdio.h>
#include<dos.h>
#include<graphics.h>
main()

{
	int a=DETECT,b,i,j;
	int z;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");

	for(j=0;j<4;j++)
	{
	if(j%2==0)
	{
	for(i=0;i<50;i++)
	{
	rectangle(50,50,100,100);
	rectangle(25,25,75,75);
	line(50,50,25,25);
	line(100,100,75,75);
	line(50,100,25,75);
	line(100,50,75,25);

	line(25,25,75,25);
	line(25,25,50,50-i);
	line(50,50-i,100,50-i);
	line(100,50-i,75,25);
	delay(100);
	clrscr();
	}
	}
	else
	{
	for(i=0;i<50;i++)
	{
	rectangle(50,50,100,100);
	rectangle(25,25,75,75);
	line(50,50,25,25);
	line(100,100,75,75);
	line(50,100,25,75);
	line(100,50,75,25);

	line(25,25,75,25);
	line(25,25,50,0+i);
	line(50,0+i,100,0+i);
	line(100,0+i,75,25);
	delay(100);
	clrscr();
	}

	}
	}
	getch();
	closegraph();
}