#include<stdio.h>
#include<dos.h>
#include<graphics.h>
main()

{
	int a=DETECT,b,i,j,k,m=0;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");


	for(i=0;i<200;i++)
	{
		circle(2*i,100,i/2);
		delay(10);
		clrscr();
	}
	getch();
	closegraph();
}