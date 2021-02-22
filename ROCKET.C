#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()                        //09/04/2019
{
int gd=DETECT,gm,i;
char ch;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(2);
settextstyle(0,0,4);
outtextxy(150,200,"Launch Rocket...[y/n]");
ch=getch();
if(ch=='y')
{
cleardevice();
setcolor(4);
settextstyle(0,0,10);
outtextxy(260,200,"10");     //10
delay(1000);
cleardevice();
outtextxy(280,200,"9");    //9
delay(1000);
cleardevice();
outtextxy(280,200,"8");   //8
delay(1000);
cleardevice();
outtextxy(280,200,"7");  //7
delay(1000);
cleardevice();
outtextxy(280,200,"6");  //6
delay(1000);
cleardevice();
outtextxy(280,200,"5");   //5
delay(1000);
cleardevice();
outtextxy(280,200,"4");    //4
delay(1000);
cleardevice();
outtextxy(280,200,"3");    //3
delay(1000);
cleardevice();
outtextxy(280,200,"2");    //2
delay(1000);
cleardevice();
outtextxy(280,200,"1");     //1
delay(2000);
cleardevice();
outtextxy(260,200,"GO....");     //Go..
for(i=1;i<=700;i++)
{
setcolor(4);
setfillstyle(1,4);
bar(265,163-i,335,300-i);
setcolor(4);
setfillstyle(8,4);
sector(300,100-i,240,300,70,70);
setcolor(0);
setfillstyle(1,14);
circle(300,210-i,20);
floodfill(300,210-i,0);
setcolor(14);
setfillstyle(1,14);
circle(300,333-i,33);
floodfill(300,333-i,14);
setfillstyle(1,14);
circle(300,370-i,25);
floodfill(300,370-i,14);
setfillstyle(1,14);
circle(300,400-i,15);
floodfill(300,400-i,14);
delay(10);
cleardevice();
}

}
else
{
cleardevice();
setcolor(4);
settextstyle(0,0,4);
outtextxy(160,200,"Try Again..");
delay(2000);
}
exit(0);
getch();
closegraph();
}