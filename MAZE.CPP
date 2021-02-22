#include<iostream.h>
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
    while(inp!='x'){
	inp=getch();
	if(inp=='a'){
		x-=5;
		if(getpixel(x-20,y)!=0){
			break;
		}
	}
	else if(inp=='s'){
		y+=5;
		if(getpixel(x,y+20)!=0){
			break;
		}
	}
	else if(inp=='w'){
		y-=5;
		if(getpixel(x,y-20)!=0){
			break;
		}
	}
	else if(inp=='d'){
		x+=5;
		if(getpixel(x+20,y)!=0){
			break;
		}
	}
	cleardevice();
	line(100,100,500,100);
	line(100,150,500,150);
	circle(x,y,20);
    }
    closegraph();

}