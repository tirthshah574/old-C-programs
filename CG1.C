#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

int main(){
	int gd = DETECT, gm;
	float radius,x,y,z;

	initgraph(&gd, &gm, "C:\\TC\\BGI");

	for(y = 180; y<=300; y+=1){
		x = sqrt(3600-(y-240)*(y-240))+320;
		line(320, 240, x, y);
		setfillstyle((int)y%11, (int)y%11);
		circle(320, 240, 70);
		floodfill(321, 241, WHITE);
		/*for(radius = 20; radius <= 125; radius += 20){
			circle(320, 240, radius);
		}*/
		delay(100);
		cleardevice();
	}
	for(y = 300; y>=180; y-=1){
		x = 320 - sqrt(3600-(y-240)*(y-240));
		line(320, 240, x, y);
		setfillstyle((int)y%11, (int)y%11);
		circle(320,240, 70);
		floodfill(321, 241, WHITE);
		/*for(radius = 20; radius <= 125; radius += 20){
			circle(320, 240, radius);
		}*/
		delay(100);
		cleardevice();
	}

	getch();
	closegraph();
	return 0;
}