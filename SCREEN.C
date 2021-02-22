#include<stdio.h>
#include<dos.h>
#include<graphics.h>
main()

{
	int a=DETECT,b,i,j,k,m=0;
	clrscr();

	initgraph(&a,&b,"C:\\tc\\bgi");
	for(k=0;k<4;k++)
	{
		if(k%2==0)
		{
		for(i=0;i<1000;i++)
		{
			setcolor(RED);
			line(i,0,i,1920);
			sound(i);
			delay(1);
		}
		}
	else
	{
	for(i=1000;i>0;i--)
	{
		setcolor(BLUE);
		line(i,0,i,1920);
		sound(i);
		delay(1);
	}
	}
	delay(100);
	}
	nosound();


	getch();
	closegraph();
}