#include<stdio.h>
#include<dos.h>
#include<graphics.h>
main()

{
	int a=DETECT,b,i,j,k,m=0;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");

	for(i=0;i<1920;i++)
	{
		setcolor(RED);
		line(i,0,i,1920);
	}

	getch();
	closegraph();

}