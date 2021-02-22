#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd=DETECT, gm;
    char inp;
    int x=100,y=125;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    line(100,100,500,100);
    line(100,150,500,150);
    circle(x,y,20);
    printf(getpixel(0,0));
    while(inp!='x'){
	inp=getch();
	if(inp=='a'){
		x-=5;
	}
	else if(inp=='s'){
		y+=5;
	}
	else if(inp=='w'){
		y-=5;
	}
	else if(inp=='d'){
		x+=5;
	}
	cleardevice();
	line(100,100,500,100);
	line(100,150,500,150);
	circle(x,y,20);
    }
    closegraph();

}