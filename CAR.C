#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>

int findRandom(){
	int r;
	srand(time(0));
	r = rand();
	r = r%400;
	if(r<0){
		findRandom();
	}
	r+=100;
	return r;
}
int main(){
	int gd = DETECT, gm;
	int r[100],o,s=0;
	int radius,x=1,y,z,i=-150, j=0, k[100];
	char a;
	int q=1,p=0;
	int del=20, score=0, miss=3;
	clock_t c;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	r[0]=findRandom();
	c=clock();

	for(o=0;o<100;o++)
		k[o]=0;

	while(x==1){
		c= clock();
		while(!kbhit()){
			for(o=0;o<miss;o++)
				printf("\3");
			for(o=0;o<miss;o++)
				printf("\b");
			if(miss<1){
				goto n;
			}
			for(p=s;p<q;p++){
				if(k[p]>500){
					k[p]=0;
					srand(time(0));
					s++;
					r[q+1] = findRandom();
					q++;
					miss--;
				}
				else if(((k[p]+20>=230+j&&k[p]<=230+j)&&(r[p]>250+i&&r[p]<300+i))||((k[p]+20>=270+j&&k[p]<=270+j)&&(r[p]>200+i&&r[p]<350+i))){
					//circle(300,300,100);
					k[p]=0;
					srand(time(0));
					s++;
					r[q+1] = findRandom();
					q++;
					score++;
					if(score%3==0){
						del-=3;
						k[p]=0;
					}
				} else {
					k[p]++;
					line(r[p], k[p], r[p], k[p]+20);
					if(c>q*100&&c<q*100+20){
						q++;
					}
				}
			}
			line(250+i, 230+j, 300+i, 230+j);
			line(250+i, 230+j, 225+i, 270+j);
			line(300+i, 230+j, 325+i, 270+j);
			line(225+i, 270+j, 200+i, 270+j);
			line(325+i, 270+j, 350+i, 270+j);
			line(200+i, 270+j, 200+i, 300+j);
			line(350+i, 270+j, 350+i, 300+j);
			line(200+i, 300+j, 350+i, 300+j);
			circle(240+i, 300+j, 15);
			circle(310+i, 300+j, 15);
			c=clock()-c;
			c=c*2;
			delay(20);
			//clrscr();
			cleardevice();
		}
		a=getch();
		if((a=='d')&&(350+i)<630){
			i+=10;
			//clrscr();
			cleardevice();
		}
		if((a=='a')&&(350+i)>120){
			i-=10;
			//clrscr();
			cleardevice();
		}
		if((a=='w')&&(300+j>10)){
			j-=10;
			//clrscr();
			cleardevice();
		}
		if((a=='s')&&(300+j<450)){
			j+=10;
			//clrscr();
			cleardevice();
		}
		if(a=='x'){
			x=0;
		}
			line(250+i, 230+j, 300+i, 230+j);
			line(250+i, 230+j, 225+i, 270+j);
			line(300+i, 230+j, 325+i, 270+j);
			line(225+i, 270+j, 200+i, 270+j);
			line(325+i, 270+j, 350+i, 270+j);
			line(200+i, 270+j, 200+i, 300+j);
			line(350+i, 270+j, 350+i, 300+j);
			line(200+i, 300+j, 350+i, 300+j);
			circle(240+i, 300+j, 15);
			circle(310+i, 300+j, 15);
	}
	n:
	printf("OOPS GAME OVER!!!\nYour score is %d", score);
	getch();
	closegraph();
	return 0;
}