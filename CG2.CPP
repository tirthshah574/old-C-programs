#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

#define PI 3.141

int main(){
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "C:\\TC\\BGI");
	line(300,300,300,240);
	float c = sqrt(7200-(2*7200*cos(PI/4)));
	cout<<c<<" ";
	float y,z,x;
	for(y = 240;y < 360;y++){
		x = sqrt(3600-(y-300)*(y-300))+300;
		z=sqrt((x-300)*(x-300)+(y-240)*(y-240));
		if(z-c>0&&z-c<0.5){
			line(300,300,x,y);
			cout<<z;
		}
	}
	getch();
}
