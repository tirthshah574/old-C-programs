#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<dos.h>

void main(){
	clrscr();
	for(int i = 0; i<10; i++){
		cout<<clock();
		delay(1000);
	}
	getch();
}