#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(15);
settextstyle(8,0,4);
outtextxy(150,10,"Attendance Bar Chart");    //12/04/2019
delay(1000);
setcolor(15);
line(100,400,570,400);
delay(1000);
line(100,400,100,100);
delay(1000);
setcolor(4);
settextstyle(1,0,3);
outtextxy(70,60,"X");
delay(1000);
outtextxy(580,400,"Y");
delay(1000);
setcolor(2);
settextstyle(1,0,2);
outtextxy(60,90,"100");  /*  number*/
delay(1000);
outtextxy(70,120,"90");
delay(1000);
outtextxy(70,150,"80");
delay(1000);
outtextxy(70,180,"70");
delay(1000);
outtextxy(70,210,"60");
delay(1000);
outtextxy(70,240,"50");
delay(1000);
outtextxy(70,270,"40");
delay(1000);
outtextxy(70,300,"30");
delay(1000);
outtextxy(70,330,"20");
delay(1000);
outtextxy(70,360,"10");
delay(1000);
outtextxy(80,390,"0");   /*number*/
delay(1000);
//
setcolor(4);
setfillstyle(1,4);      //1.RED
bar(120,200,150,400);
delay(1000);
//
setcolor(1);
setfillstyle(1,1);        //2.Blue
bar(170,140,200,400);
delay(1000);
//
setcolor(14);
setfillstyle(1,14);       //3.Yellow
bar(220,170,250,400);
delay(1000);
//
setcolor(2);
setfillstyle(1,2);           //4.Green
bar(270,250,300,400);
delay(1000);
//
setcolor(3);
setfillstyle(1,3);          //5.Cyan
bar(320,140,350,400);
delay(1000);
//
setcolor(5);
setfillstyle(1,5);           //6. Magenta
bar(370,120,400,400);
delay(1000);
//
setcolor(6);
setfillstyle(1,6);             //7.Brown
bar(420,200,450,400);
delay(1000);
//
setcolor(12);
setfillstyle(1,12);             //8. Lightred
bar(470,250,500,400);
delay(1000);
//
setcolor(10);
setfillstyle(1,10);               //9. Lightgreen
bar(520,340,550,400);
delay(1000);
//
setcolor(4);
setfillstyle(1,4);
circle(510,60,5);       //1
floodfill(510,60,4);
settextstyle(8,0,1);
outtextxy(520,45,"Tujal");
delay(1000);

//
setcolor(1);
setfillstyle(1,1);
circle(510,80,5);       //2
floodfill(510,80,1);
settextstyle(8,0,1);
outtextxy(520,65,"Varsha");
delay(1000);
//
setcolor(14);
setfillstyle(1,14);
circle(510,100,5);       //3
floodfill(510,100,14);
settextstyle(8,0,1);
outtextxy(520,85,"Ravi");
delay(1000);
//
setcolor(2);
setfillstyle(1,2);
circle(510,120,5);       //4
floodfill(510,120,2);
settextstyle(8,0,1);
outtextxy(520,105,"Nilesh");
delay(1000);
//
setcolor(3);
setfillstyle(1,3);
circle(510,140,5);       //5
floodfill(510,140,3);
settextstyle(8,0,1);
outtextxy(520,125,"Vaibhav");
delay(1000);
//
setcolor(5);
setfillstyle(1,5);
circle(510,160,5);       //6
floodfill(510,160,5);
settextstyle(8,0,1);
outtextxy(520,145,"Raziya");
delay(1000);
//
setcolor(6);
setfillstyle(1,6);
circle(510,180,5);       //7
floodfill(510,180,6);
settextstyle(8,0,1);
outtextxy(520,165,"Seema");
delay(1000);
//
setcolor(12);
setfillstyle(1,12);
circle(510,200,5);       //8
floodfill(510,200,12);
settextstyle(8,0,1);
outtextxy(520,185,"Naina");
delay(1000);
//
setcolor(10);
setfillstyle(1,10);
circle(510,220,5);       //9
floodfill(510,220,10);
settextstyle(8,0,1);
outtextxy(520,205,"Vikas");
delay(1000);
//
getch();
closegraph();
}